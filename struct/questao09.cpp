#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct Paciente{
    char nome[50];
    int idade;
    char diagnostico[100];
};

void exibirIdosos(Paciente pacientes[], int tamanho){
    bool encontrou = false;
    
    cout << "\n--- Pacientes acima de 60 anos ---\n";
    for(int i = 0; i < tamanho; i++){
        if(pacientes[i].idade >= 60){
            cout << "Nome: " << pacientes[i].nome << endl;
            cout << "Idade: " << pacientes[i].idade << endl;
            cout << "Diagnóstico: " << pacientes[i].diagnostico << endl;
            cout << "---------------------------------------------" << endl;
            encontrou = true;
        }
    }
    if(!encontrou){
        cout << "Nenhum paciente idoso encontrado." << endl;
    }
}

int main(){
    
    int n;
    cout << "Digite o número de pacientes que deseja cadastrar: ";
    cin >> n;
    cin.ignore();
    
    Paciente* pacientes = (Paciente*)malloc(n * sizeof(Paciente));
    
    for(int i = 0; i < n; i++){
        cout << "Cadastro do paciente " << i + 1 << "---" << endl;
        
        cout << "Nome: ";
        cin.getline(pacientes[i].nome, 50);
        
        cout << "Idade: ";
        cin >> pacientes[i].idade;
        cin.ignore();
        
        cout << "Diagnósticos: ";
        cin.getline(pacientes[i].diagnostico, 100);
    }
    
    exibirIdosos(pacientes, n);
    
    free(pacientes);
    
    
    
    return 0;
}