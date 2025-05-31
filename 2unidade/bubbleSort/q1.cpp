#include <iostream>
using namespace std;

void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
}

int main() {
    int v[] = {9, 7, 5, 3, 1, 2, 4, 6, 8, 0};
    int n = 10;
    bubbleSort(v, n);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}