#include <iostream>
using namespace std;

void insertionSortDecrescente(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int key = v[i], j = i - 1;
        while (j >= 0 && v[j] < key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int main() {
    int v[] = {30, 20, 10, 40, 50, 70, 60, 90, 80, 100};
    int n = 10;
    insertionSortDecrescente(v, n);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}