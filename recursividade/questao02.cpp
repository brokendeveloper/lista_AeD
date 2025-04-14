#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int maiorElemento(int vetor[], int tamanho){
    if(tamanho == 1){
        return vetor[0];
    }

    int procuraMaior = maiorElemento(vetor, tamanho - 1);

    if(vetor[tamanho - 1] > procuraMaior){
        return vetor[tamanho -1];
    }else{
        return procuraMaior;
    }
}

int main(){

    int vetorQualquer[] = {2, 3, 4, 9, 10, 12, 5};
    int tamanho = 7;

    int maiorElementoVetor = maiorElemento(vetorQualquer, tamanho);

    cout << "O maior elemento do vetor é: " << maiorElementoVetor << endl;



    return 0;
}