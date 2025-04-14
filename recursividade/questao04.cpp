#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int calcularProduto(int num1, int num2){

    if (num1 == 0 || num2 == 0 ){
        return 0;
    }

    if (num1 == 1 && num2 != 1){
        return num2;
    }

    if (num1 != 1 && num2 == 1){
        return num1;
    }

    return num1 + calcularProduto(num1, num2 - 1); 
}

int main(){

    int num1, num2;

    cout << "Escolha 2 números: ";
    cin >> num1 >> num2;

    int produto = calcularProduto(num1, num2);

    cout << "o produto dos números escolhido é: " << produto << endl;

    return 0;
}