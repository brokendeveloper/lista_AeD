#include <iostream>
using namespace std;

int main() {
    int v[] = {15, 25, 35, 45, 55};
    int n = 5, hash[10];
    for (int i = 0; i < 10; i++) hash[i] = -1;
    for (int i = 0; i < n; i++) {
        int pos = v[i] % 10;
        hash[pos] = v[i];
    }
    cout << "Tabela hash: ";
    for (int i = 0; i < 10; i++) cout << hash[i] << " ";
    cout << endl;
    return 0;
}