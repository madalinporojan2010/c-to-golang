%{
#include <stdlib.h>
#include "y.tab.h"

%}

%%


("int"|"float"|"char"|"void"|"bool") { 
                   yylval.type = strdup(yytext);
                   return TYPE;
                }

"main"          return MAIN;
">="            return GE;
"<="            return LE;
"=="            return EQ;
"!="            return NE;
"&&"            return AND;
"||"            return OR;
"true"          return TRUE;
"false"         return FALSE;
"for"           return FOR;
"while"         return WHILE;
"if"            return IF;
"else"          return ELSE;
"printf"        return PRINTF;
"scanf"         return SCANF;
"return"        return RETURN;

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
[-()<>=+/*{};,&!] return *yytext;

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
