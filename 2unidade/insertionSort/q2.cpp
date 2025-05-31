#include <iostream>
using namespace std;

int main() {
    int v[] = {9, 8, 3, 4, 7, 6, 1, 2, 5, 0};
    int n = 10, pares[10], p = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) pares[p++] = v[i];
    // insertion sort nos pares
    for (int i = 1; i < p; i++) {
        int key = pares[i], j = i - 1;
        while (j >= 0 && pares[j] > key) {
            pares[j + 1] = pares[j];
            j--;
        }
        pares[j + 1] = key;
    }
    // recoloca pares ordenados no vetor original
    int idx = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) v[i] = pares[idx++];
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}