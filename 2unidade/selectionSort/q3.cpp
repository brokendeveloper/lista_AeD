#include <iostream>
using namespace std;

void selectionSortDecrescente(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] > v[max_idx]) max_idx = j;
        int temp = v[max_idx];
        v[max_idx] = v[i];
        v[i] = temp;
    }
}

int main() {
    int v[] = {42, 33, 60, 15, 75, 12, 25, 90, 1, 6};
    int n = 10;
    selectionSortDecrescente(v, n);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}