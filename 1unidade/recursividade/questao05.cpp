#include <iostream>
#include <cstring>
using namespace std;

void regressivar(int n){

    if(n < 0){
        n= -n;
    }

    if(n == 0){
        cout << 0 << endl;
        return;
    }

    cout << n << endl;
    regressivar(n - 1);

}

int main(){

    int numero;

    cout << "digite um número: ";
    cin >> numero;

    cout << "contagem regressiva a partir do número escolhido: ";
    regressivar(numero);
}