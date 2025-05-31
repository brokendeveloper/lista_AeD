#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Contato{
    char nome[50];
    char telefone[15];
};

void adicionarContato(Contato* agenda, int& tamanho){
     cout << "\n --- Adicionando Contato ---" << endl;
    
    cout << "Nome: ";
    cin.ignore(); 
    cin.getline(agenda[tamanho].nome, 50);
    
    cout << "Telefone: ";
    cin.getline(agenda[tamanho].telefone, 15);
    
    tamanho++;
}

void buscarContato(Contato* agenda, int tamanho, const char* nomeBusca){
    cout << "\n--- Buscando Contato ---" << endl;
    
    bool encontrado = false;
    
    for(int i = 0; i < tamanho; i++){
        if(strcmp(agenda[i].nome, nomeBusca) == 0){
            cout << "Contato encontrado!" << endl;
            cout << "Nome: " << agenda[i].nome << endl;
            cout << "Telefone: " << agenda[i].telefone << endl;
            encontrado = true;
            break;
        }
    }
    
    if(!encontrado){
        cout << "Contado não encontrado " << endl;
    }
}

void listarContatos(Contato* agenda, int tamanho) {
    cout << "\n--- Lista de Contatos ---" << endl;
    
    if (tamanho == 0) {
        cout << "Nenhum contato cadastrado." << endl;
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        cout << i + 1 << ". Nome: " << agenda[i].nome << " | Telefone: " << agenda[i].telefone << endl;
    }
}

int main() {
    int capacidade = 5;  
    int totalContatos = 0;
    
    
    Contato* agenda = (Contato*)malloc(capacidade * sizeof(Contato));

    if (agenda == nullptr) {
        cout << "Erro ao alocar memória!" << endl;
        return 1;
    }

    int opcao;
    do {
        cout << "\n--- AGENDA TELEFÔNICA ---" << endl;
        cout << "1. Adicionar Contato" << endl;
        cout << "2. Buscar Contato" << endl;
        cout << "3. Listar Contatos" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                if (totalContatos == capacidade) {
                    capacidade *= 2;  // Aumenta a capacidade da agenda
                    agenda = (Contato*)realloc(agenda, capacidade * sizeof(Contato));

                    if (agenda == nullptr) {
                        cout << "Erro ao realocar memória!" << endl;
                        return 1;
                    }
                }
                adicionarContato(agenda, totalContatos);
                break;

            case 2: {
                char nomeBusca[50];
                cout << "Digite o nome do contato: ";
                cin.ignore();
                cin.getline(nomeBusca, 50);
                buscarContato(agenda, totalContatos, nomeBusca);
                break;
            }

            case 3:
                listarContatos(agenda, totalContatos);
                break;

            case 4:
                cout << "Saindo da agenda..." << endl;
                break;

            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    } while (opcao != 4);

    
    free(agenda);

    return 0;
}