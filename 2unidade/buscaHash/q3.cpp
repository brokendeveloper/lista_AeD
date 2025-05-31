#include <iostream>
using namespace std;

int main() {
    int v[] = {17, 27, 37, 47, 57};
    int n = 5, hash[10];
    for (int i = 0; i < 10; i++) hash[i] = -1;
    for (int i = 0; i < n; i++) {
        int pos = v[i] % 10;
        while (hash[pos] != -1) pos = (pos + 1) % 10;
        hash[pos] = v[i];
    }
    int chave = 37, pos = chave % 10, tent = 0, achou = 0;
    while (hash[pos] != -1 && tent < 10) {
        if (hash[pos] == chave) { achou = 1; break; }
        pos = (pos + 1) % 10; tent++;
    }
    cout << "37 " << (achou ? "encontrado" : "nao encontrado") << " na tabela hash" << endl;
    return 0;
}