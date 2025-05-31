#include <iostream>
using namespace std;

int main() {
    int v[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10, chave = 100, ini = 0, fim = n-1, meio, comp = 0;
    while (ini <= fim) {
        comp++;
        meio = (ini + fim) / 2;
        if (v[meio] == chave) break;
        else if (chave < v[meio]) fim = meio - 1;
        else ini = meio + 1;
    }
    cout << "Comparacoes para achar 100: " << comp << endl;
    return 0;
}