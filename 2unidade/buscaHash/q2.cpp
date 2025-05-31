#include <iostream>
using namespace std;

int main() {
    int v[] = {12, 22, 32, 42};
    int n = 4;
    int hash[10][4], tam[10] = {0};
    for (int i = 0; i < n; i++) {
        int pos = v[i] % 10;
        hash[pos][tam[pos]++] = v[i];
    }
    int chave = 22, achou = 0;
    int pos = chave % 10;
    for (int i = 0; i < tam[pos]; i++)
        if (hash[pos][i] == chave) achou = 1;
    cout << "22 " << (achou ? "encontrado" : "nao encontrado") << " na lista da posicao " << pos << endl;
    return 0;
}