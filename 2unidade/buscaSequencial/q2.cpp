#include <iostream>
using namespace std;

int main() {
    int v[] = {7, 3, 5, 7, 9, 2, 7, 1, 4, 6};
    int n = 10, cont = 0;
    for (int i = 0; i < n; i++)
        if (v[i] == 7) cont++;
    cout << "7 aparece " << cont << " vezes" << endl;
    return 0;
}