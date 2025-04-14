#include <iostream>
using namespace std;

struct Retangulo{
    float base;
    float altura;
};

float calcularArea(Retangulo* retangulo){
    
    return retangulo->base * retangulo->altura;

}

float calcularPerimetro(Retangulo* retangulo){
    retangulo->base = retangulo->base * 2;
    retangulo->altura = retangulo->altura * 2;
    
    return retangulo->base + retangulo->altura;
}

int main(){
    
    Retangulo ret;
    
    cout << "informe as medidas do retângulo: " << endl;
    
    cout << "Base: " << endl;
    cin >> ret.base;

    cout << "Altura: " << endl;
    cin >> ret.altura;
    
    cout << "Área do retângulo: " << calcularArea(&ret) << endl;
    cout << "Perimetro do retângulo: " << calcularPerimetro(&ret) << endl;
    
    return 0;
}