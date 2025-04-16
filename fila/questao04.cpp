#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct No {
    char nome[50];
    No* prox;
};

No* enfileirar(No* fim, const char* nome) {
    No* novo = (No*)malloc(sizeof(No));
    strcpy(novo->nome, nome);
    novo->prox = NULL;
    if (fim != NULL) fim->prox = novo;
    return novo;
}

No* desenfileirar(No* &inicio) {
    if (inicio == NULL) return NULL;
    No* temp = inicio;
    inicio = inicio->prox;
    return temp;
}

void exibirFila(No* inicio) {
    if (inicio == NULL) {
        cout << "Fila vazia.\n";
        return;
    }
    No* atual = inicio;
    while (atual != NULL) {
        cout << atual->nome << " -> ";
        atual = atual->prox;
    }
    cout << "NULL\n";
}

void inverterFila(No* &inicio, No* &fim) {
    No* topo = NULL;
    while (inicio != NULL) {
        No* temp = desenfileirar(inicio);
        temp->prox = topo;
        topo = temp;
    }
    fim = NULL;
    while (topo != NULL) {
        No* temp = topo;
        topo = topo->prox;
        temp->prox = NULL;
        if (inicio == NULL) {
            inicio = fim = temp;
        } else {
            fim->prox = temp;
            fim = temp;
        }
    }
}

int main() {
    No* inicio = NULL;
    No* fim = NULL;

    inicio = fim = enfileirar(NULL, "Ana");
    fim = enfileirar(fim, "Bruno");
    fim = enfileirar(fim, "Carlos");
    fim = enfileirar(fim, "Diana");

    cout << "Fila original:\n";
    exibirFila(inicio);

    inverterFila(inicio, fim);

    cout << "\nFila invertida:\n";
    exibirFila(inicio);

    while (inicio != NULL) {
        No* temp = inicio;
        inicio = inicio->prox;
        free(temp);
    }

    return 0;
}
