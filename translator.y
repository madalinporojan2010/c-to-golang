%{
#define _GNU_SOURCE

void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h> /* C exit function */
#include <string.h>

int tabSize = 4;
int nTab = 4;
%}

%union {char *number; char *variable; char *type; char *chr; }         /* Yacc definitions */
%start program

%token MAIN 
%token FOR WHILE IF ELSE

%token GE LE EQ NE

%token PRINTF

%token <variable> VARIABLE
%token <type> TYPE
%token <number> NUMBER

%type <chr> exp assignment line statement condition multi_lines multi_statements

%%

program: TYPE MAIN '(' ')' '{' multi_statements '}' 
            { 
                printf("package main\n\n");
                printf("import (\n");
                printf("\t\"fmt\"\n");
                printf(")\n\n");

                printf("func main() {\n");
                printf("%s", $6);
                printf("}");
            }
    | 
    ;

multi_statements: multi_lines {asprintf(&$$, "%s", $1);}
    | statement line { asprintf(&$$, "%s%s%*s}\n", $1, $2, nTab - tabSize, ""); nTab-=tabSize; }
    | statement '{' multi_statements '}' { asprintf(&$$, "%s%s%*s}\n", $1, $3, nTab - tabSize, ""); nTab-=tabSize; }
    | multi_statements statement line { asprintf(&$$, "%s%s%s%*s}\n", $1, $2, $3, nTab - tabSize, ""); nTab-=tabSize; }
    | multi_statements statement '{' multi_statements '}' { asprintf(&$$, "%s%s%s%*s}\n", $1, $2, $4, nTab - tabSize, "");  nTab-=tabSize; }
    | multi_statements multi_lines { asprintf(&$$, "%s%s", $1, $2); }
    | { asprintf(&$$, ""); }
    ;


statement: IF '(' condition ')' { asprintf(&$$, "%*sif %s {\n", nTab, "", $3); nTab+=tabSize; }
    | WHILE '(' condition ')' { asprintf(&$$, "%*sfor {\n%*sif %s {\n%*sbreak\n%*s}\n", nTab, "", nTab + tabSize, "", $3, nTab + tabSize * 2, "", nTab + tabSize, ""); nTab+=tabSize; }
    | FOR '(' assignment ';' condition ';' assignment ')' { asprintf(&$$, "%*sfor %s; %s; %s {\n", nTab, "", $3, $5, $7); nTab+=tabSize; }
    ;
    
multi_lines: line { asprintf(&$$, "%s", $1); }
    | multi_lines line { asprintf(&$$, "%s%s", $1, $2);}
    | { asprintf(&$$, ""); }
    ;

line: assignment ';' { asprintf(&$$, "%*s%s\n", nTab, "", $1); }
    | exp ';' { asprintf(&$$, "%*s%s\n", nTab, "", $1); }
    | { asprintf(&$$, ""); }
    ;

condition: exp { asprintf(&$$, "%s != 0", $1); }
    | exp '>' exp { asprintf(&$$, "%s > %s", $1, $3); }
    | exp '<' exp { asprintf(&$$, "%s < %s", $1, $3); }
    | exp EQ exp { asprintf(&$$, "%s == %s", $1, $3); }
    | exp NE exp { asprintf(&$$, "%s != %s", $1, $3); }
    | exp GE exp { asprintf(&$$, "%s >= %s", $1, $3); }
    | exp LE exp { asprintf(&$$, "%s <= %s", $1, $3); }
    ;

exp: NUMBER { asprintf(&$$, "%s", $1); }
    | VARIABLE { asprintf(&$$, "%s", $1); }
    | exp '+' exp {asprintf(&$$, "%s + %s", $1, $3);}
    | exp '-' exp {asprintf(&$$, "%s - %s", $1, $3);}
    | exp '*' exp {asprintf(&$$, "%s * %s", $1, $3);}
    | exp '/' exp {asprintf(&$$, "%s / %s", $1, $3);}
    ;


assignment: TYPE VARIABLE {asprintf(&$$, "var %s %s", $2, $1);}
    | VARIABLE '=' exp {asprintf(&$$, "%s = %s", $1, $3);} 
    | TYPE VARIABLE '=' exp {asprintf(&$$, "%s := %s", $2, $4);} 
    ;