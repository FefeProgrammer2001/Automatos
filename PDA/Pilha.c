#include "Pilha.h"
#include <stdio.h>

void pilha_init(Pilha *p) {
    p->topo = -1;
}

int pilha_vazia(const Pilha *p) {
    return p->topo == -1;
}

int pilha_cheia(const Pilha *p) {
    return p->topo == TAM_MAX - 1;
}

void pilha_push(Pilha *p, char c) {
    if(pilha_cheia(p)) {
        fprintf(stderr, "Erro: pilha cheia\n");
        return;
    }
    p->itens[++p->topo] = c;
}

char pilha_pop(Pilha *p) {
    if(pilha_vazia(p)) {
        fprintf(stderr, "Erro: pilha vazia\n");
        return '\0';
    }
    return p->itens[p->topo--];
}

char pilha_topo(const Pilha *p) {
    if(pilha_vazia(p)) return '\0';
    return p->itens[p->topo];
}