#include <iostream>
using namespace std;

int main() {
    int v[] = {2, 4, 6, 8, 10, 12, 13, 14, 16, 18};
    int n = 10, chave = 13, ini = 0, fim = n-1, meio, pos = -1;
    while (ini <= fim) {
        meio = (ini + fim) / 2;
        if (v[meio] == chave) { pos = meio; break; }
        else if (chave < v[meio]) fim = meio - 1;
        else ini = meio + 1;
    }
    cout << "Indice do 13: " << pos << endl;
    return 0;
}