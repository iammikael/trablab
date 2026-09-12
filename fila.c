//Fila Criacao, insercao(enfileirar), remocao(desenfileirar), cheia, vazia

#include "fila.h"
#include <stdio.h>

//cria fila
void criarFila(Fila *f){
    f->inicio = 0;
    f->fim = 0;
    f->quantidade = 0;
}

//insercao na fila
int enfileirar(Fila *f, int valor) {                  
    if (filaCheia(f)) {
        printf("A fila está cheia!\n");
        return 0;
    } else {
        f->dados[f->fim] = valor;                      
        f->fim = (f->fim + 1) % TAM_FILA;              
        f->quantidade++;                                
        printf("Inserido: %d\n", valor);
        return 1;
    }
}

//remocao da fila
int desenfileirar(Fila *f, int *valor) {                
    if (filaVazia(f)) {
        printf("A fila está vazia!\n");
        return 0;
    }
    *valor = f->dados[f->inicio];                       
    f->inicio = (f->inicio + 1) % TAM_FILA;             
    f->quantidade--;                                    
    return 1;
}

// verifica se a fila ta cheia
int filaCheia(Fila *f){
    return f->quantidade == TAM_FILA;
}

//verifica se a fila ta vazia 
int filaVazia(Fila *f){
    return f->quantidade == 0;
}

void imprimirFila(Fila *f) {
    printf("Fila (inicio -> fim): [");
    int idx = f->inicio;
    for (int i = 0; i < f->quantidade; i++) {
        printf("%d", f->dados[idx]);
        if (i < f->quantidade - 1) printf(", ");
        idx = (idx + 1) % TAM_FILA;
    }
    printf("]\n");
}