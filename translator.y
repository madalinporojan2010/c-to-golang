%{
#define _GNU_SOURCE

void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h> /* C exit function */
#include <string.h>

int tabSize = 4;
int nTab = 0;
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
                printf("\"fmt\"\n");
                printf(")\n\n");

                printf("func main() {\n");
                nTab+=tabSize;
                printf("%*s%s", nTab, "", $6);
                printf("}");
            }
    | 
    ;

multi_statements: multi_lines {asprintf(&$$, "%*s%s", nTab, "", $1);}
    | statement line { asprintf(&$$, "%s%*s%s%*s}\n", $1, nTab, "", $2, nTab, ""); nTab-=tabSize; }
    | statement '{' multi_lines '}' { asprintf(&$$, "%s%*s%s%*s}\n", $1, nTab, "", $3, nTab, ""); nTab-=tabSize; }
    | multi_statements statement line { asprintf(&$$, "%s%s%*s%s%*s}\n", $1, $2, nTab, "", $3, nTab, ""); nTab-=tabSize; }
    | multi_statements statement '{' multi_lines '}' { asprintf(&$$, "%s%s%*s%s%*s}\n", $1, $2, nTab, "", $4, nTab, "");  nTab-=tabSize; }
    | { asprintf(&$$, ""); }
    ;


statement: IF '(' condition ')' { asprintf(&$$, "%*sif (%s) {\n", nTab, "", $3); nTab+=tabSize; }
    ;
    
multi_lines: line { asprintf(&$$, "%s", $1); }
    | multi_lines line { asprintf(&$$, "%s%*s%s", $1, nTab, "", $2); }
    | { asprintf(&$$, "\n"); }
    ;

line: assignment ';' { asprintf(&$$, "%*s%s\n", nTab, "", $1); }
    | exp ';' { asprintf(&$$, "%*s%s\n", nTab, "", $1); }
    | { asprintf(&$$, "\n"); }
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