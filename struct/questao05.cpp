
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct Funcionario{
    char nome[50];
    char cargo[30];
    float salario;
};


int main() {
   int n;
   
   cout << "quantos funcionarios voce quer inserir? " << endl;
   cin >> n;
   cin.ignore();
   
   Funcionario* funcionarios = (Funcionario*)malloc(n * sizeof(Funcionario));
   
   if(funcionarios == nullptr){
       cout << "Erro ao alocar memória" << endl;
       return 1;
   }
   
   for(int i = 0; i < n; i++){
       cout << "Cadastro do funcionario " << i + 1 << endl;
       
       cout << "Nome: ";
       cin.getline(funcionarios[i].nome, 50);
       
       cout << "Cargo: ";
       cin.getline(funcionarios[i].cargo, 30);
       
       cout << "Salário: ";
       cin >> funcionarios[i].salario;
       cin.ignore();
   }
   
   cout << "\nLista de Funcionários Cadastrados: " << endl;
   
   for(int i = 0; i<n; i++){
       cout << "\nFuncionário " << i + 1 << endl;
       
       cout << "Nome: " << funcionarios[i].nome << endl;
       cout << "Cargo: " << funcionarios[i].cargo << endl;
       cout << "Salário: " << funcionarios[i].salario << endl;
   }
   
   free(funcionarios);

    return 0;
}