%{
#include <stdlib.h>
#include "y.tab.h"

%}

%%

("int"|"float"|"char") { 
                   yylval.type = strdup(yytext);
                   return TYPE;
                }

"main"          return MAIN;
">="            return GE;
"<="            return LE;
"=="            return EQ;
"!="            return NE;
"for"           return FOR;
"while"         return WHILE;
"if"            return IF;
"else"          return ELSE;
"printf"        return PRINTF;
"scanf"         return SCANF;

  /* variables */
[a-zA-Z]+       {
                   yylval.variable = strdup(yytext);
                   return VARIABLE;
                }

  /* integers */                 
[0-9]+          {
                   yylval.number = strdup(yytext);
                   return NUMBER;
                }

  /* operators */
[-()<>=+/*{};,] return *yytext;

\"([^\"]|\n)*\" {
                   yylval.string = strdup(yytext);
                   return STRING;
                }

[ \t\n]+        ;      // Skip whitespaces.

.               yyerror("Unknown character.\n");

%%

int yywrap(void)
{
    return 1;
}
