#ifndef FILA_H
#define FILA_H
 
#define TAM_FILA 5
 
typedef struct {
    int dados[TAM_FILA];
    int inicio;
    int fim;
    int quantidade;
} Fila;
 
void criarFila(Fila *f);
int enfileirar(Fila *f, int valor);
int desenfileirar(Fila *f, int *valor);
int filaCheia(Fila *f);
int filaVazia(Fila *f);
 
#endif