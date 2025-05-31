#include <iostream>
using namespace std;

int main() {
    int v[] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    int n = 10, trocas = 0;
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] < v[min_idx]) min_idx = j;
        if (min_idx != i) {
            int temp = v[min_idx];
            v[min_idx] = v[i];
            v[i] = temp;
            trocas++;
        }
    }
    cout << "Total de trocas: " << trocas << endl;
    return 0;
}