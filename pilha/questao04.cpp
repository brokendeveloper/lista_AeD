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

bool verificarParenteses(const char* expressao) {
    Pilha p;
    inicializar(p);

    for (int i = 0; i < strlen(expressao); i++) {
        if (expressao[i] == '(') {
            push(p, '(');
        } else if (expressao[i] == ')') {
            if (isEmpty(p)) return false;
            pop(p);
        }
    }

    return isEmpty(p);
}


void inverterString(char str[]) {
    Pilha p;
    inicializar(p);

    for (int i = 0; i < strlen(str); i++) {
        push(p, str[i]);
    }

    for (int i = 0; i < strlen(str); i++) {
        str[i] = pop(p);
    }
}

void decimalParaBinario(int numero) {
    Pilha p;
    inicializar(p);

    if (numero == 0) {
        cout << 0 << endl;
        return;
    }

    while (numero > 0) {
        int resto = numero % 2;
        push(p, resto);
        numero = numero / 2;
    }

    cout << "Binário: ";
    while (!isEmpty(p)) {
        cout << pop(p);
    }
    cout << endl;
}


int main() {
    int numero;

    cout << "Digite um número decimal: ";
    cin >> numero;

    decimalParaBinario(numero);

    return 0;
}