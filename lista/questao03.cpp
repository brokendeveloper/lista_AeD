#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct No {
    int valor;
    No* prox;
};

No* inserirInicio(No* head, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = head;
    return novo;
}

No* inserirFim(No* head, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (head == NULL) {
        return novo;
    }

    No* atual = head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    atual->prox = novo;
    return head;
}

No* removerValor(No* head, int valor) {
    if (head == NULL) {
        return NULL;
    }

    if (head->valor == valor) {
        No* temp = head;
        head = head->prox;
        free(temp);
        return head;
    }

    No* atual = head;
    while (atual->prox != NULL && atual->prox->valor != valor) {
        atual = atual->prox;
    }

    if (atual->prox != NULL) {
        No* temp = atual->prox;
        atual->prox = temp->prox;
        free(temp);
    }

    return head;
}

void imprimirLista(No* head) {
    No* atual = head;
    while (atual != NULL) {
        cout << atual->valor << " -> ";
        atual = atual->prox;
    }
    cout << "NULL" << endl;
}

int contarElementos(No* head) {
    int contador = 0;
    No* atual = head;
    while (atual != NULL) {
        contador++;
        atual = atual->prox;
    }
    return contador;
}

No* inserirOrdenado(No* head, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (head == NULL || valor < head->valor) {
        novo->prox = head;
        return novo;
    }

    No* atual = head;
    while (atual->prox != NULL && atual->prox->valor < valor) {
        atual = atual->prox;
    }

    novo->prox = atual->prox;
    atual->prox = novo;

    return head;
}


int main() {
    No* lista = NULL;

    
    lista = inserirOrdenado(lista, 30);
    lista = inserirOrdenado(lista, 10);
    lista = inserirOrdenado(lista, 50);
    lista = inserirOrdenado(lista, 20);
    lista = inserirOrdenado(lista, 40);

    cout << "Lista ordenada: ";
    imprimirLista(lista);

   

    return 0;
}
