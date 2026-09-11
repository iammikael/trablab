//Pilha Criacao, insercao(push), remocao(pop), cheia, vazia
#include "pilha.h"
#include <stdio.h>
#define TAM 5;

//criacao da pilha
void criarPilha(Pilha *p) {
    p->topo = -1;
}

//insercao na pilha
int push(Pilha *p, int valor) {
    if (pilhaCheia(p)) return 0;
    p->topo++;
    p->dados[p->topo] = valor;
    return 1;
}

//remocao da pilha
int pop(Pilha *p, int *valor) {
    if (pilhaVazia(p)) return 0;
    *valor = p->dados[p->topo];
    p->topo--;
    return 1;
}

//verifica se a pilha ta cheia
int pilhaCheia(Pilha *p) {
    return p->topo == TAM - 1;
}

//verifica se a pilha ta vazia
int pilhaVazia(Pilha *p) {
    return p->topo == -1;
}



