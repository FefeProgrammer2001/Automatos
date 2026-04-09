#ifndef PILHA_H
#define PILHA_H

#define TAM_MAX 256

typedef struct {
    char itens[TAM_MAX];
    int topo;
} Pilha;

void pilha_init(Pilha *p);
int pilha_vazia(const Pilha *p);
int pilha_cheia(const Pilha *p);
void pilha_push(Pilha *p, char c);
char pilha_pop(Pilha *p);
char pilha_topo(const Pilha *p);

#endif