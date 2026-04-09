#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "palindromo.h"

static void normaliza(const char *entrada, char *saida) {
    int j = 0;
    for(int i = 0; entrada[i] != '\0'; i++)
        if(isalpha((unsigned char)entrada[i]))
            saida[j++] = (char)tolower((unsigned char)entrada[i]);
    saida[j] = '\0';
}

int palindromo(const char *str) {
    char s[TAM_MAX];
    normaliza(str, s);
    int len = (int)strlen(s);

    Pilha pilha;
    pilha_init(&pilha);

    Estado estado = Q0;
    int pos = 0;

    while(estado != Q2 && estado != Q3) {
        switch(estado) {
            case Q0:
                if(pos < len) {
                    pilha_push(&pilha, s[pos++]);
                } else {
                    pos = 0;
                    estado = Q1;
                }
                break;

            case Q1:
                if(pos < len) {
                    char topo = pilha_pop(&pilha);
                    if(topo == s[pos]) {
                        pos++;
                    } else {
                        estado = Q3;
                    }
                } else {
                    estado = pilha_vazia(&pilha) ? Q2 : Q3;
                }
                break;

            case Q2:
            case Q3:
                break;
        }
    }

    return estado == Q2;
}