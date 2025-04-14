#include <iostream>
using namespace std;


int somaDigitos(int n){

    if(n < 0){
        n = -n;
    }

    if(n < 10){
        return n;
    }

    return (n % 10)+ somaDigitos(n / 10);
}

int main(){

    int n;
    
    cout << "escolha um número: ";
    cin >> n;

    cout << "a soma dos números = " << somaDigitos(n) << endl;

    return 0;
}