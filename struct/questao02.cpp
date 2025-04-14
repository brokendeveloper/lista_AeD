#include <iostream>
using namespace std;

struct Aluno{
    char nome[50];
    int matricula;
    float nota;
};

int main(){

    Aluno alunos[5];

    float somaNotas = 0.0;

    for(int i = 0; i<5; i++){
        cout << "Digite os dados do aluno: " << i + 1 << " " << endl;

        cout << "Nome: ";
        cin.ignore();
        cin.getline(alunos[i].nome, 50);

        cout << "Matricula: " << endl;
        cin >> alunos[i].matricula;

        cout << "Nota: " << endl;
        cin >> alunos[i].nota;

        somaNotas+=alunos[i].nota;
        cout << endl;

    }
    
    float media = somaNotas/5;

    cout << "A média das notas dos alunos é =  " << media << endl;



    return 0;
}