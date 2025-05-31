#include <iostream>
using namespace std;

#define MAX 100

struct Fila {
    int elementos[MAX];
    int inicio;
    int fim;
    int tamanho;
};

void inicializar(Fila &f) {
    f.inicio = 0;
    f.fim = -1;
    f.tamanho = 0;
}

bool isEmpty(Fila f) {
    return f.tamanho == 0;
}

bool isFull(Fila f) {
    return f.tamanho == MAX;
}

void enqueue(Fila &f, int valor) {
    if (!isFull(f)) {
        f.fim = (f.fim + 1) % MAX;
        f.elementos[f.fim] = valor;
        f.tamanho++;
    } else {
        cout << "Fila cheia!" << endl;
    }
}

int dequeue(Fila &f) {
    if (!isEmpty(f)) {
        int valor = f.elementos[f.inicio];
        f.inicio = (f.inicio + 1) % MAX;
        f.tamanho--;
        return valor;
    } else {
        cout << "Fila vazia!" << endl;
        return -1;
    }
}

int front(Fila f) {
    if (!isEmpty(f)) {
        return f.elementos[f.inicio];
    } else {
        cout << "Fila vazia!" << endl;
        return -1;
    }
}

int main() {
    Fila f;
    inicializar(f);

    enqueue(f, 10);
    enqueue(f, 20);
    enqueue(f, 30);

    cout << "Frente da fila: " << front(f) << endl;

    cout << "Removendo: " << dequeue(f) << endl;

    cout << "Frente agora: " << front(f) << endl;

    return 0;
}
