#include <iostream>
using namespace std;

int main() {
    int v[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10, chave = 55, pos = -1;
    for (int i = 0; i < n; i++)
        if (v[i] == chave) { pos = i; break; }
    cout << "Indice do 55: " << pos << endl;
    return 0;
}