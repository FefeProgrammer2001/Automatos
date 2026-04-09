#ifndef PALINDROMO_H
#define PALINDROMO_H

#include "Pilha.h"

typedef enum {
    Q0,
    Q1,
    Q2,
    Q3
} Estado;

int palindromo(const char *str);

#endif