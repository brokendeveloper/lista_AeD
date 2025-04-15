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


int main() {
    No* lista = NULL;

    
    lista = inserirInicio(lista, 30);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 10);

    cout << "Lista após inserções no início: ";
    imprimirLista(lista);

    lista = inserirFim(lista, 40);
    lista = inserirFim(lista, 50);

    cout << "Lista após inserções no fim: ";
    imprimirLista(lista);

   
    lista = removerValor(lista, 30);
    cout << "Lista após remover o valor 30: ";
    imprimirLista(lista);

    lista = removerValor(lista, 10);
    cout << "Lista após remover o valor 10: ";
    imprimirLista(lista);

    lista = removerValor(lista, 99); // valor que não existe
    cout << "Tentativa de remover valor que não está na lista (99): ";
    imprimirLista(lista);

    return 0;
}
