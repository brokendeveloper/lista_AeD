#include <iostream>
using namespace std;

void bubbleSortDecrescente(int v[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (v[j] < v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
}

int main() {
    int v[] = {12, 3, 45, 7, 18, 9, 25, 31, 6, 11};
    int n = 10;
    bubbleSortDecrescente(v, n);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}