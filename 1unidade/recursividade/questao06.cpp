#include <iostream>
#include <cstring>
using namespace std;

int palindromo(const char* str, int inicio, int fim){
    if(inicio >= fim){
        return 1;
    }

    if(str[inicio] != str[fim]){
        return 0;
    }

    return palindromo(str, inicio + 1, fim - 1);
}

int main(){

    char palavra[100];

    cout << "Digite uma palavra: ";
    cin >> palavra;

    int tamanho = strlen(palavra);

    if (palindromo(palavra, 0, tamanho -1)){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}