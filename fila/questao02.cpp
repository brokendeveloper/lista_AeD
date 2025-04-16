#include <iostream>
using namespace std;

#define MAX 5

struct FilaCircular {
    int dados[MAX];
    int inicio;
    int fim;
    int tamanho;
};

void inicializar(FilaCircular &fila) {
    fila.inicio = 0;
    fila.fim = -1;
    fila.tamanho = 0;
}

bool isEmpty(FilaCircular fila) {
    return fila.tamanho == 0;
}

bool isFull(FilaCircular fila) {
    return fila.tamanho == MAX;
}

void enqueue(FilaCircular &fila, int valor) {
    if (isFull(fila)) {
        cout << "Fila cheia. Não é possível inserir " << valor << endl;
        return;
    }

    fila.fim = (fila.fim + 1) % MAX;
    fila.dados[fila.fim] = valor;
    fila.tamanho++;
    cout << "Inserido: " << valor << endl;
}

int dequeue(FilaCircular &fila) {
    if (isEmpty(fila)) {
        cout << "Fila vazia. Nada a remover." << endl;
        return -1;
    }

    int valor = fila.dados[fila.inicio];
    fila.inicio = (fila.inicio + 1) % MAX;
    fila.tamanho--;
    return valor;
}

int front(FilaCircular fila) {
    if (isEmpty(fila)) {
        cout << "Fila vazia." << endl;
        return -1;
    }

    return fila.dados[fila.inicio];
}

void exibir(FilaCircular fila) {
    if (isEmpty(fila)) {
        cout << "Fila vazia." << endl;
        return;
    }

    cout << "Fila: ";
    for (int i = 0; i < fila.tamanho; i++) {
        int index = (fila.inicio + i) % MAX;
        cout << fila.dados[index] << " ";
    }
    cout << endl;
}

int main() {
    FilaCircular fila;
    inicializar(fila);

    enqueue(fila, 10);
    enqueue(fila, 20);
    enqueue(fila, 30);
    enqueue(fila, 40);
    enqueue(fila, 50);  

    exibir(fila);

    cout << "Removido: " << dequeue(fila) << endl;
    cout << "Removido: " << dequeue(fila) << endl;

    exibir(fila);

    enqueue(fila, 60);
    enqueue(fila, 70);  

    exibir(fila);

    cout << "Frente da fila: " << front(fila) << endl;

    return 0;
}
