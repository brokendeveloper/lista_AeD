#include <iostream>
using namespace std;

int main() {
    int v[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int n = 10, chave = 27, ini = 0, fim = n-1, meio, pos = -1;
    while (ini <= fim) {
        meio = (ini + fim) / 2;
        if (v[meio] == chave) { pos = meio; break; }
        else if (chave < v[meio]) fim = meio - 1;
        else ini = meio + 1;
    }
    if (pos == -1) pos = ini; // posição de inserção
    cout << "Posicao de insercao do 27: " << pos << endl;
    return 0;
}