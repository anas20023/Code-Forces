%{
#include <stdio.h>
int id = 0, keyword = 0, number = 0, op = 0, other = 0;
char *keywords[] = {"int", "float", "char", "if", "else", "while", "for", "return"};
int isKeyword(char *s) {
    for(int i=0; i<8; i++) {
        if(strcmp(s, keywords[i]) == 0) return 1;
    }
    return 0;
}
%}

%%
[a-zA-Z_][a-zA-Z0-9_]*   {
                           if(isKeyword(yytext))
                               keyword++;
                           else
                               id++;
                         }

[0-9]+                   { number++; }

[+\-*/=<>]               { op++; }

.|\n                     { other++; }
%%

int yywrap(){
	return 1;
}
int main(int argc, char *argv[]) {
    if(argc > 1)
        yyin = fopen(argv[1], "r");   // Take input file
    yylex();
    printf("\nToken Counts:\n");
    printf("Keywords: %d\n", keyword);
    printf("Identifiers: %d\n", id);
    printf("Numbers: %d\n", number);
    printf("Operators: %d\n", op);
    printf("Others: %d\n", other);
    return 0;
}
