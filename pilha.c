#include "pilha.h"
#include <stdio.h>

void criarPilha(Pilha *p) {
    p->topo = -1;
}

int pilhaCheia(Pilha *p) {
    return p->topo == TAM - 1;
}

int pilhaVazia(Pilha *p) {
    return p->topo == -1;
}

int push(Pilha *p, int valor) {
    if (pilhaCheia(p)) return 0;
    p->topo++;
    p->dados[p->topo] = valor;
    return 1;
}

int pop(Pilha *p, int *valor) {
    if (pilhaVazia(p)) return 0;
    *valor = p->dados[p->topo];
    p->topo--;
    return 1;
}