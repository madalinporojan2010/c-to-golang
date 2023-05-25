# c-to-golang
C translator to Go Language

## Descriere

Translatorul este capabil sa recunoasca functii, expresii boolene, expresii aritmetice, if-uri, for-uri, while-uri, apeluri de functii, type-uri din limbajul C si sa le traduca in limbajul
Go.
In implementarea traducatorului am ales sa preiau cu ajutorul lex-ului, urmatoarele caractere si grupuri de caractere:
 - ("int"|"float"|"char"|"void"|"bool") -> Tipurile de date mai importante din C
 - "main" -> functia main
 - ">=" -> operator boolean mai mare egal
 - "<=" -> operator boolean mai mic egal
 - "==" -> operator boolean de egalitate
 - "!=" -> operator boolean `diferit de`
 - "&&" -> operator boolean `SI`
 - "||" -> operator boolean `SAU`
 - "true" -> operand boolean cu valoarea 1
 - "false" -> operand boolean cu valoarea 0
 - "for" -> statement-ul FOR
 - "while" -> statement-ul while care nu exista in golang si va fii transformat intr-un for
 - "if" -> statement-ul if care in C are conditiile intre paranteze, insa in go standard-ul este folosirea conditiei fara paranteze
 - "else" -> statement-ul else, legat de if
 - "printf" -> functia printf; in go exista o functie similara
 - "scanf" -> functia printf; in go exista o functie similara
 - "return" -> keyword-ul return
 - [a-zA-Z]+ -> variabile formate din litere mari sau mici
 - [0-9]+ -> numere intregi
 - [-()<>=+/*{};,&!] -> minus, paranteze, operatori de ordine, aritmetici, booleeni, acolade, etc...
 - \"([^\"]|\n)*\" -> string finder
 - [ \t\n]+ -> spatiile, taburile sau new line-urile sunt ignorate
 - . -> orice alt caracter produce o exceptie


In ceea ce priveste fisierul yacc, aici se realizeaza transformarea din limbajul C in GO, prin recunoasterea diferitelor keyword-uri din C, si traducerea lor in limbajul GO. 
Programul yacc are urmatoarele 13 stari, la care se adauga starea de program, de start:
 - program -> afiseaza import-urile si pachetul din care face parte fisierul .go cat si eventualele functii ce se regasesc in fisierul c
 - multiple_functions -> recunoaste mai multe functii
 - functions -> recunoaste functiile reprezentate de `TIP_RETURNAT numeFunctie(...TIP argumente)` in C, iar in GO, `func numeFunctie(...argumente TIP) TIP_RETURNAT`, cat si functii predefinite din C eg printf si scanf
 - multi_statements -> recunoaste mai multe linii cu expresii sau mai multe linii cu conditii sau mai multe linii de conditii cu mai multe expresii in blocul lor de cod
 - multiple_arguments -> recunoaste mai multe argumente necesare functiilor apelate
 - typed_multiple_arguments -> recunoaste mai multe argumente cu tipul lor, necesare functiilor declarate
 - argument -> argument pentru functie apelata
 - statement -> recunoaste if uri, else if-uri, while sau for
 - multi_lines -> recunoaste mai multe linii de expresii
 - line -> recunoaste expresii aritmetice, boolene, apeluri de functii, conditii boolene si expresii return pentru functii. 
 - called_function -> formata din `numeFunc(...argumente_fara_tip)`
 - condition -> conditii boolene sau de ordine
 - exp -> expresii aritmetice
 - assignment -> asignari de variable

De asemenea, a fost creata si o functie utilitara `const char *convertToGOTypes(char *string)` necesara pentru convertirea din tipurile din C in tipurile de date din GO.
 