#include <iostream>
using namespace std;

int calcularProdutoIterativo(int num1, int num2){

    if(num1 == 0 || num2 == 0){
        return 0;
    }

    int resultado = 0;

    for(int i = 0; i < num2; i++){
        resultado += num1;
    }

    return resultado;
}

int main(){

    int num1, num2;

    cout << "digite dois numeros: ";
    cin >> num1 >> num2;

    int produto = calcularProdutoIterativo(num1, num2);

    cout << "produto: " << produto << endl;

    return 0;
}