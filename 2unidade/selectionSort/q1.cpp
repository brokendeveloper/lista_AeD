#include <iostream>
using namespace std;

void selectionSortTrocas(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] < v[min_idx]) min_idx = j;
        if (min_idx != i) {
            int temp = v[min_idx];
            v[min_idx] = v[i];
            v[i] = temp;
        }
        for (int k = 0; k < n; k++) cout << v[k] << " ";
        cout << endl;
    }
}

int main() {
    int v[] = {29, 10, 14, 37, 13, 40, 2, 7, 5, 18};
    int n = 10;
    selectionSortTrocas(v, n);
    return 0;
}