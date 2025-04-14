#include <iostream>
using namespace std;

int maiorElementoIterativo(int vetor[], int tamanho){
    // logica diferente do recursivo. 
    // assume que o primeiro é o maior para pode ter um elemento de comparação dentro do laço.
    int maior = vetor[0];

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    return maior;
}

int main(){

    int vetor[] = {12, 2, 54, 3, 45, 993, 214, 1};
    //int tamanho = sizeof(vetor) / sizeof(vetor[0]); // maneira complicada
    int tamanho = 8; // maneira tranquila

    cout << "maior elemento do vetor: " << maiorElementoIterativo(vetor, tamanho) << endl;



    return 0;
}