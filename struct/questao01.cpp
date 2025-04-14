#include <iostream>
using namespace std;

struct Aluno{
    char nome[50];
    int matricula;
    float nota;
};

void exibirAluno(Aluno a){
    cout << "Dados do Aluno: " << endl;
    cout << "Nome: " << a.nome << endl;
    cout << "Mátricula: " << a.matricula << endl;
    cout << "Nota: " << a.nota << endl;
}

int main(){

    Aluno aluno1;

    cout << "\nDigite os dados do aluno: \n";
    cout << "Digite o nome: " << endl;
    cin.getline(aluno1.nome, 50);

    cout << "Digite a mátricula: " << endl;
    cin >> aluno1.matricula;

    cout << "Digite a nota: " << endl;
    cin >> aluno1.nota;

    exibirAluno(aluno1);


    return 0;
}