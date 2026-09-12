//Lista Criação, inserção, remoção, cheia, vazia, busca e ordenação

#include "lista.h"
#include <stdio.h>

//Cria lista 
void criarLista(Lista *l) {
    l->qtd = 0;
}

//Inserir itens na lista
int inserirLista(Lista *l, int valor) {
    if (listaCheia(l)) {
        printf("[Lista] Erro: lista cheia, nao foi possivel inserir %d\n", valor);
        return 0;
    }
    l->dados[l->qtd] = valor;
    l->qtd++;
    return 1;
}

//Remove items da lista
int removerLista(Lista *l, int valor) {
    int pos = buscarLista(l, valor);
    if (pos == -1) {
        printf("[Lista] Erro: valor %d nao encontrado para remocao\n", valor);
        return 0;
    }
    for (int i = pos; i < l->qtd - 1; i++) {
        l->dados[i] = l->dados[i + 1];
    }
    l->qtd--;
    return 1;
}

//verifica se a lista ta cheia
int listaCheia(Lista *l) {
    return l->qtd == TAM_LISTA;
}

//verifica se a lista esta vazia
int listaVazia(Lista *l) {
    return l->qtd == 0;
}

//Busca dentro da lista
int buscarLista(Lista *l, int valor) {
    for (int i = 0; i < l->qtd; i++) {
        if (l->dados[i] == valor) {
            return i;
        }
    }
    return -1;
}

//ordenacao da lista
void ordenarLista(Lista *l) {
    for (int i = 0; i < l->qtd - 1; i++) {
        for (int j = 0; j < l->qtd - 1 - i; j++) {
            if (l->dados[j] > l->dados[j + 1]) {
                int tmp = l->dados[j];
                l->dados[j] = l->dados[j + 1];
                l->dados[j + 1] = tmp;
            }
        }
    }
}