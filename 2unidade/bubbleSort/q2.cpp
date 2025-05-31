#include <iostream>
using namespace std;

void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false;
        for (int j = 0; j < n - i - 1; j++)
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                trocou = true;
            }
        if (!trocou) break;
    }
}

int main() {
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    bubbleSort(v, n);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}