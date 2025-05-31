#include <iostream>
using namespace std;

#define MAX 100

struct Pilha {
    int elementos[MAX];
    int topo;
};

void inicializar(Pilha &p) {
    p.topo = -1;
}

bool isEmpty(Pilha p) {
    return p.topo == -1;
}

void push(Pilha &p, int valor) {
    if (p.topo == MAX - 1) {
        cout << "Pilha cheia! Não é possível inserir mais elementos.\n";
        return;
    }
    p.topo++;
    p.elementos[p.topo] = valor;
    cout << "Elemento " << valor << " inserido no topo.\n";
}

void pop(Pilha &p) {
    if (isEmpty(p)) {
        cout << "Pilha vazia! Nada a remover.\n";
        return;
    }
    cout << "Elemento " << p.elementos[p.topo] << " removido do topo.\n";
    p.topo--;
}

void top(Pilha p) {
    if (isEmpty(p)) {
        cout << "Pilha vazia! Sem topo.\n";
        return;
    }
    cout << "Topo da pilha: " << p.elementos[p.topo] << endl;
}



int main() {
    Pilha minhaPilha;
    inicializar(minhaPilha);

    push(minhaPilha, 10);
    push(minhaPilha, 20);
    push(minhaPilha, 30);

    top(minhaPilha);

    pop(minhaPilha);
    top(minhaPilha);

    pop(minhaPilha);
    pop(minhaPilha);
    pop(minhaPilha);

    return 0;
}
