#ifndef LISTA_H
#define LISTA_H

#define TAM_LISTA 5

typedef struct {
    int dados[TAM_LISTA];
    int qtd;
} Lista;

void criarLista(Lista *l);
int listaCheia(Lista *l);
int listaVazia(Lista *l);
int inserirLista(Lista *l, int valor);
int removerLista(Lista *l, int valor);
int buscarLista(Lista *l, int valor);
void ordenarLista(Lista *l);
void imprimirLista(Lista *l);
#endif