#ifndef PILHA_H
#define PILHA_H

#define TAM 5

typedef struct {
    int dados[TAM];
    int topo;
} Pilha;

void criarPilha(Pilha *p);
int pilhaCheia(Pilha *p);
int pilhaVazia(Pilha *p);
int push(Pilha *p, int valor);
int pop(Pilha *p, int *valor);
void imprimirPilha(Pilha *p);

#endif