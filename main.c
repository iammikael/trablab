#include <stdio.h>
#include "TADs.h"

void testarPilha(void) {
    printf("\n===== TESTE PILHA =====\n");
    Pilha p;
    criarPilha(&p);

    printf("-- Empilhando 6 valores (capacidade e 5, o 6o deve falhar) --\n");
    for (int i = 1; i <= 6; i++) {
        push(&p, i * 10);
    }
    imprimirPilha(&p);

    printf("-- Desempilhando 6 valores (o 6o deve falhar, pilha vazia) --\n");
    int valor;
    for (int i = 1; i <= 6; i++) {
        if (pop(&p, &valor)) {
            printf("Pop: %d\n", valor);
        }
    }
    imprimirPilha(&p);
}

void testarFila(void) {
    printf("\n===== TESTE FILA =====\n");
    Fila f;
    criarFila(&f);
    int valor;

    printf("-- Insere x3 --\n");
    enfileirar(&f, 1);
    enfileirar(&f, 2);
    enfileirar(&f, 3);
    imprimirFila(&f);

    printf("-- Remove x3 --\n");
    for (int i = 0; i < 3; i++) {
        if (desenfileirar(&f, &valor)) printf("Removido: %d\n", valor);
    }
    imprimirFila(&f);

    printf("-- Insere x3 --\n");
    enfileirar(&f, 4);
    enfileirar(&f, 5);
    enfileirar(&f, 6);
    imprimirFila(&f);

    printf("-- Remove x3 --\n");
    for (int i = 0; i < 3; i++) {
        if (desenfileirar(&f, &valor)) printf("Removido: %d\n", valor);
    }
    imprimirFila(&f);
}

void testarLista(void) {
    printf("\n===== TESTE LISTA =====\n");
    Lista l;
    criarLista(&l);

    printf("-- Inserindo 6 valores (capacidade e 5, o 6o deve falhar) --\n");
    int valores[] = {30, 10, 50, 20, 40, 60};
    for (int i = 0; i < 6; i++) {
        inserirLista(&l, valores[i]);
    }
    imprimirLista(&l);

    printf("-- Buscando valor 20 --\n");
    int pos = buscarLista(&l, 20);
    if (pos != -1) printf("Valor 20 encontrado na posicao %d\n", pos);

    printf("-- Ordenando lista --\n");
    ordenarLista(&l);
    imprimirLista(&l);

    printf("-- Removendo 6 valores em ordem diferente (o ultimo deve falhar) --\n");
    int remover[] = {50, 10, 40, 20, 30, 99};
    for (int i = 0; i < 6; i++) {
        if (removerLista(&l, remover[i])) {
            printf("Removido: %d\n", remover[i]);
        }
    }
    imprimirLista(&l);
}

int main(void) {
    testarPilha();
    testarFila();
    testarLista();
    return 0;
}