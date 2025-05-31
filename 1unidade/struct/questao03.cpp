#include <iostream>
using namespace std;

struct Produto{
    char nome[30];
    int codigo;
    float preco;
};

void imprimeProdutoFormatado(Produto p){
    cout << "Nome do produto: " << p.nome << endl;
    cout << "Código do produto: " << p.codigo << endl;
    cout << "Preço do produto: " << p.preco << endl;
}

int main(){
    
    Produto produto1;
    
    cout << "Informe os atributos do produto: " << endl;
    
    // Não usar cin.ignore() se não for necessário
    cout << "Nome: ";
    cin.getline(produto1.nome, 30);
    
    cout << "Código: ";
    cin >> produto1.codigo;  
    
    cout << "Preço: ";
    cin >> produto1.preco;  
    
    imprimeProdutoFormatado(produto1);
    
    return 0;
}
