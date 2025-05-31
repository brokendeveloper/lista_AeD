#include <iostream>
using namespace std;

int somaDigitosIterativo(int n){

    int soma = 0;

    while(n != 0){
        soma += n % 10;
        n = n/10;

    }

    return soma;
}

int main(){

    int n;

    cout << "digite um número: ";
    cin >> n;

    cout << "a soma de digitos é: " << somaDigitosIterativo(n) << endl;


    return 0;
}