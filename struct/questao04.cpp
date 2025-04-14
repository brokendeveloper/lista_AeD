#include <iostream>
#include <cstring>
using namespace std;

struct Carro{
    char modelo[30];
    int ano;
    float preco;
};

int main(){
    
    // Alocando memória dinamicamente para a struct Carro
    Carro* carro = (Carro*)malloc(sizeof(Carro)); 
    // malloc aloca memória para uma struct Carro

    if(carro == nullptr) {  // Verifica se a alocação foi bem-sucedida
        cout << "Falha na alocação de memória!" << endl;
        return 1;  // Sai do programa se a alocação falhar
    }

   
    cout << "Digite o modelo do carro: ";
    cin.getline(carro->modelo, 30);  

    cout << "Digite o ano do carro: ";
    cin >> carro->ano;  

    cout << "Digite o preço do carro: ";
    cin >> carro->preco;  


    cout << "\nInformações do carro:" << endl;
    cout << "Modelo: " << carro->modelo << endl;
    cout << "Ano: " << carro->ano << endl;
    cout << "Preço: " << carro->preco << endl;

    // Liberando a memória alocada
    free(carro);
    
    return 0;
}