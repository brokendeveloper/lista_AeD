#include <iostream>
using namespace std;

int regressivar(int n){
    if(n < 0){
        n = -n;
    }

    if(n == 0){
        return 0;
    }


    while(n >= 0){
        cout << n << endl;
        n--;
    }
}


int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    regressivar(num);
    

    return 0;
}