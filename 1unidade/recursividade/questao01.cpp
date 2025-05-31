#include <iostream>
using namespace std;

int contarDigitos(int n){
    
    if(n < 0){
        n = -n;
    }
    
    if(n < 10){
        return 1;
    }
    
    return 1 + contarDigitos(n / 10);
}

int main() {
    
    int numero;
    
    cout << "Digite um número: ";
    cin >> numero;
    
    int resultado = contarDigitos(numero);
    
    cout << "O número escolhido possui " << resultado << " digitos" << endl;

    return 0;
}