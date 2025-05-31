#include <iostream>
using namespace std;

void insertionSort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int key = v[i], j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int main() {
    int v[] = {22, 11, 99, 88, 9, 7, 42, 65, 33, 10};
    int n = 10;
    insertionSort(v, n);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}