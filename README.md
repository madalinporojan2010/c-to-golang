# c-to-golang
C translator to Go Language

## Descriere

Translatorul este capabil sa recunoasca functii, expresii boolene, expresii aritmetice, if-uri, for-uri, while-uri, apeluri de functii, type-uri din limbajul C si sa le traduca in limbajul
Go.
In implementarea traducatorului am ales sa preiau cu ajutorul lex-ului, urmatoarele caractere si grupuri de caractere:



 - ("int"|"float"|"char"|"void"|"bool") 
 - "main"          return MAIN;
 - ">="            return GE;
 - "<="            return LE;
 - "=="            return EQ;
 - "!="            return NE;
 - "&&"            return AND;
 - "||"            return OR;
 - "true"          return TRUE;
 - "false"         return FALSE;
 - "for"           return FOR;
 - "while"         return WHILE;
 - "if"            return IF;
 - "else"          return ELSE;
 - "printf"        return PRINTF;
 - "scanf"         return SCANF;
 - "return"        return RETURN;
 - [a-zA-Z]+                 
 - [0-9]+  
 - [-()<>=+/*{};,&!]
 - \"([^\"]|\n)*\"
 - [ \t\n]+
 - . 
