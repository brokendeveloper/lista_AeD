#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Cliente {
    char nome[50];
    Cliente* prox;
};


Cliente* enfileirar(Cliente* fim, const char* nome) {
    Cliente* novo = (Cliente*)malloc(sizeof(Cliente));
    strcpy(novo->nome, nome);
    novo->prox = NULL;

    if (fim != NULL) {
        fim->prox = novo;
    }

    return novo;
}


Cliente* desenfileirar(Cliente* &inicio) {
    if (inicio == NULL) {
        cout << "Fila vazia. Nenhum cliente para atender.\n";
        return NULL;
    }

    Cliente* atendido = inicio;
    cout << "Atendendo cliente: " << atendido->nome << endl;

    inicio = inicio->prox;
    free(atendido);
    return inicio;
}


void exibirFila(Cliente* inicio) {
    if (inicio == NULL) {
        cout << "Fila vazia.\n";
        return;
    }

    Cliente* atual = inicio;
    cout << "Clientes na fila:\n";
    while (atual != NULL) {
        cout << "- " << atual->nome << endl;
        atual = atual->prox;
    }
}

int main() {
    Cliente* inicio = NULL;
    Cliente* fim = NULL;
    int opcao;
    char nome[50];

    do {
        cout << "\n--- Fila de Atendimento Bancário ---\n";
        cout << "1. Chegada de Cliente\n";
        cout << "2. Atender Cliente\n";
        cout << "3. Exibir Fila\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore(); 

        switch(opcao) {
            case 1:
                cout << "Digite o nome do cliente: ";
                cin.getline(nome, 50);
                if (inicio == NULL) {
                    inicio = enfileirar(NULL, nome);
                    fim = inicio;
                } else {
                    fim = enfileirar(fim, nome);
                }
                break;
            case 2:
                inicio = desenfileirar(inicio);
                if (inicio == NULL) fim = NULL;
                break;
            case 3:
                exibirFila(inicio);
                break;
            case 0:
                cout << "Encerrando atendimento.\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (opcao != 0);

    while (inicio != NULL) {
        inicio = desenfileirar(inicio);
    }

    return 0;
}
