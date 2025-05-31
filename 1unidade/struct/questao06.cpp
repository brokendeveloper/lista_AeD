#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct Livro {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
};


void exibirPorAno(Livro livros[], int tamanho, int ano) {
    cout << "\nLivros publicados após " << ano << ":\n";
    bool encontrou = false;  =

    for (int i = 0; i < tamanho; i++) {
        if (livros[i].anoPublicacao > ano) {
            cout << "Título: " << livros[i].titulo << endl;
            cout << "Autor: " << livros[i].autor << endl;
            cout << "Ano de Publicação: " << livros[i].anoPublicacao << endl;
            cout << "--------------------------" << endl;
            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Nenhum livro encontrado para esse critério." << endl;
    }
}

int main() {
    int n;
    
    cout << "Quantos livros deseja cadastrar? ";
    cin >> n;
    cin.ignore();  

    
    Livro* livros = (Livro*)malloc(n * sizeof(Livro));

    if (livros == nullptr) {
        cout << "Erro ao alocar memória!" << endl;
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        cout << "\nCadastro do livro " << i + 1 << endl;
        
        cout << "Título: ";
        cin.getline(livros[i].titulo, 50);
        
        cout << "Autor: ";
        cin.getline(livros[i].autor, 50);
        
        cout << "Ano de Publicação: ";
        cin >> livros[i].anoPublicacao;
        cin.ignore(); 
    }

    
    int anoFiltro;
    cout << "\nDigite um ano para buscar livros publicados depois dele: ";
    cin >> anoFiltro;

   
    exibirPorAno(livros, n, anoFiltro);

    
    free(livros);

    return 0;
}
