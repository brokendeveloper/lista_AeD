#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct ContaBancaria{
    char nomeTitular[50];
    int numConta;
    float saldo = 0.0;
};

void depositar(ContaBancaria* conta, float valorDeposito){
    
    conta->saldo = conta->saldo + valorDeposito;
    
    cout << "Depósito feito com sucesso! Saldo atual: " << conta->saldo << endl;
    
}

void sacar(ContaBancaria* conta, float valorSaque){
    
    if(conta->saldo >= valorSaque){
        conta->saldo = conta->saldo - valorSaque;
        cout << "Saque realizado! Saldo atual: " << conta->saldo << endl;
    }else{
        cout << "Saldo insuficiente para o valor do saque." << endl;
    }
}


int main() {

    ContaBancaria conta;
    
    cout << "--- Informações sobre a conta ---" << endl;
    
    cout << "Nome: ";
    cin.ignore();
    cin.getline(conta.nomeTitular, 50);
    
    cout << "Número da conta: ";
    cin >> conta.numConta;
    
    cout << "Realize seu primeiro deposito utlizando o método depositar!" << endl;
    
    float valorDeposito;
    cout << "Digite um valor para depositar: ";
    cin >> valorDeposito;
    depositar(&conta, valorDeposito);
    
    float valorSaque;
    cout << "Digite um valor para sacar: ";
    cin >> valorSaque;
    sacar(&conta, valorSaque);
    
    
    



    return 0;
}