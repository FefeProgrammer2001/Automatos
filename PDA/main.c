#include "palindromo.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    char entrada[TAM_MAX];
    
    printf("Digite uma string: ");
    if(!fgets(entrada, sizeof(entrada), stdin)) return 1;

    entrada[strcspn(entrada, "\n")] = '\0';

    if(palindromo(entrada))
        printf("\"%s\" -> PALINDROMO\n", entrada);
    else
        printf("\"%s\" -> NAO EH PALINDROMO\n", entrada);

    return 0;
}