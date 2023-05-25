%{
#define _GNU_SOURCE

void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h> /* C exit function */
#include <string.h>

int tabSize = 4;
int nTab = 4;

const char*convertToGOTypes(char *type);
%}

%union {char *number; char *variable; char *type; char *string; char *chr; }         /* Yacc definitions */
%start program

%token MAIN 
%token FOR WHILE IF ELSE

%token GE LE EQ NE AND OR TRUE FALSE

%token PRINTF SCANF RETURN

%token <variable> VARIABLE
%token <type> TYPE
%token <number> NUMBER
%token <string> STRING

%type <chr> exp assignment line statement condition multi_lines called_function multiple_arguments argument 
%type <chr> typed_multiple_arguments multi_statements functions multiple_functions
 
%%

program: multiple_functions {
                printf("package main\n\n");
                printf("import (\n");
                printf("\t\"fmt\"\n");
                printf(")\n\n");

                printf("%s", $1);
                }
    |
    ;

multiple_functions: functions {asprintf(&$$, "%s", $1);}
    | multiple_functions functions {asprintf(&$$, "%s\n%s", $1, $2);}
    | {asprintf(&$$, "");}
    ;

functions: TYPE MAIN '(' typed_multiple_arguments ')' '{' multi_statements '}' 
            { 
                asprintf(&$$, "func main() {\n");
                asprintf(&$$, "%s%s", $$, $7);
                asprintf(&$$, "%s}", $$);
            }
    | TYPE VARIABLE '(' typed_multiple_arguments ')' '{' multi_statements '}'
            { 
                asprintf(&$$, "func %s(%s) %s {\n", $2, $4, convertToGOTypes($1));
                asprintf(&$$, "%s%s", $$, $7);
                asprintf(&$$, "%s}", $$);
            }
    | {asprintf(&$$, "");}
    ;

multi_statements: multi_lines {asprintf(&$$, "%s", $1);}
    | statement line { asprintf(&$$, "%s%s%*s}\n", $1, $2, nTab - tabSize, ""); nTab-=tabSize; }
    | statement '{' multi_statements '}' { asprintf(&$$, "%s%s%*s}\n", $1, $3, nTab - tabSize, ""); nTab-=tabSize; }
    | multi_statements statement line { asprintf(&$$, "%s%s%s%*s}\n", $1, $2, $3, nTab - tabSize, ""); nTab-=tabSize; }
    | multi_statements statement '{' multi_statements '}' { asprintf(&$$, "%s%s%s%*s}\n", $1, $2, $4, nTab - tabSize, "");  nTab-=tabSize; }
    | multi_statements multi_lines { asprintf(&$$, "%s%s", $1, $2); }
    | { asprintf(&$$, ""); }
    ;


multiple_arguments: argument { asprintf(&$$, "%s", $1); }
    | multiple_arguments ',' argument { asprintf(&$$, "%s, %s", $1, $3); }
    ;

typed_multiple_arguments: TYPE argument { asprintf(&$$, "%s %s", $2, convertToGOTypes($1)); }
    | typed_multiple_arguments ',' TYPE argument { asprintf(&$$, "%s, %s %s", $1, $4, convertToGOTypes($3)); }
    | { asprintf(&$$, ""); }
    ;

argument: STRING { asprintf(&$$, "%s", $1); }
    | exp { asprintf(&$$, "%s", $1); }
    | { asprintf(&$$, ""); }
    ;

statement: IF '(' condition ')' { asprintf(&$$, "%*sif %s {\n", nTab, "", $3); nTab+=tabSize; }
    | ELSE IF '(' condition ')' { asprintf(&$$, "%*selse if %s {\n", nTab, "", $4); nTab+=tabSize; }
    | ELSE { asprintf(&$$, "%*selse {\n", nTab, ""); nTab+=tabSize; }
    | WHILE '(' condition ')' { asprintf(&$$, "%*sfor {\n%*sif %s {\n%*sbreak\n%*s}\n", nTab, "", nTab + tabSize, "", $3, nTab + tabSize * 2, "", nTab + tabSize, ""); nTab+=tabSize; }
    | FOR '(' assignment ';' condition ';' assignment ')' { asprintf(&$$, "%*sfor %s; %s; %s {\n", nTab, "", $3, $5, $7); nTab+=tabSize; }
    ;
    
multi_lines: line { asprintf(&$$, "%s", $1); }
    | multi_lines line { asprintf(&$$, "%s%s", $1, $2);}
    | { asprintf(&$$, ""); }
    ;

line: assignment ';' { asprintf(&$$, "%*s%s\n", nTab, "", $1); }
    | exp ';' { asprintf(&$$, "%*s%s\n", nTab, "", $1); }
    | called_function ';' { asprintf(&$$, "%*s%s\n", nTab, "", $1); }
    | condition ';' { asprintf(&$$, "%*s%s\n", nTab, "", $1); }
    | RETURN ';' {asprintf(&$$, "%*sreturn\n", nTab, "");}
    | RETURN exp ';' {asprintf(&$$, "%*sreturn %s\n", nTab, "", $2);}
    | RETURN condition ';' {asprintf(&$$, "%*sreturn %s\n", nTab, "", $2);}
    | RETURN called_function ';' {asprintf(&$$, "%*sreturn %s\n", nTab, "", $2);}
    | { asprintf(&$$, ""); }
    ;

called_function: PRINTF '(' STRING ',' multiple_arguments ')' { asprintf(&$$, "fmt.Printf(%s, %s)", $3, $5); }
    | SCANF '(' STRING ',' multiple_arguments ')' { asprintf(&$$, "fmt.Scanf(%s, %s)", $3, $5); }
    | VARIABLE '(' multiple_arguments ')' { asprintf(&$$, "%s(%s)", $1, $3); }
    ;

condition: exp { asprintf(&$$, "%s", $1); }
    | '!' condition { asprintf(&$$, "!%s", $2); }
    | condition '>' condition { asprintf(&$$, "%s > %s", $1, $3); }
    | condition '<' condition { asprintf(&$$, "%s < %s", $1, $3); }
    | condition EQ condition { asprintf(&$$, "%s == %s", $1, $3); }
    | condition NE condition { asprintf(&$$, "%s != %s", $1, $3); }
    | condition GE condition { asprintf(&$$, "%s >= %s", $1, $3); }
    | condition LE condition { asprintf(&$$, "%s <= %s", $1, $3); }
    | condition AND condition { asprintf(&$$, "%s && %s", $1, $3); }
    | condition OR condition { asprintf(&$$, "%s || %s", $1, $3); }
    | '(' condition ')' { asprintf(&$$, "(%s)", $2); }
    ;

exp: NUMBER { asprintf(&$$, "%s", $1); }
    | VARIABLE { asprintf(&$$, "%s", $1); }
    | TRUE { asprintf(&$$, "true"); }
    | FALSE { asprintf(&$$, "false"); }
    | called_function { asprintf(&$$, "%s", $1); }
    | exp '+' exp {asprintf(&$$, "%s + %s", $1, $3);}
    | exp '-' exp {asprintf(&$$, "%s - %s", $1, $3);}
    | exp '*' exp {asprintf(&$$, "%s * %s", $1, $3);}
    | exp '/' exp {asprintf(&$$, "%s / %s", $1, $3);}
    | '&' exp {asprintf(&$$, "&%s", $2);}
    | '*' exp {asprintf(&$$, "*%s", $2);}
    | '(' exp ')' {asprintf(&$$, "(%s)", $2);}
    ;


assignment: TYPE VARIABLE {asprintf(&$$, "var %s %s", $2, convertToGOTypes($1));}
    | VARIABLE '=' exp {asprintf(&$$, "%s = %s", $1, $3);} 
    | TYPE VARIABLE '=' exp {asprintf(&$$, "%s := %s", $2, $4);} 
    ;

%%

const char *convertToGOTypes(char *string) {
    if (strcmp(string, "float") == 0) {
        return "float64";
    } else if (strcmp(string, "char") == 0) {
        return "byte";
    } else if (strcmp(string, "void") == 0) {
        return "";
    } else {
        return string;
    }
}