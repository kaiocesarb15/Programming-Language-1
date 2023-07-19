#include "Retangulo.h"

Retangulo::Retangulo():Abstrata(2){
    nome = "Retângulo";
}

float Retangulo::calcularArea(){
    return base*altura;
}

void Retangulo::lerAtributosArea(){
    cin >> base >> altura;
}

string Retangulo::getNome(){
    return nome;
}