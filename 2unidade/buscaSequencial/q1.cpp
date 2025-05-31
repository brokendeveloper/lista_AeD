#include <iostream>
using namespace std;

int main() {
    int v[] = {15, 8, 25, 7, 12, 18, 5, 9, 30, 3};
    int n = 10, chave = 25, pos = -1;
    for (int i = 0; i < n; i++)
        if (v[i] == chave) { pos = i; break; }
    cout << "Indice do 25: " << pos << endl;
    return 0;
}