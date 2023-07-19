#include "Triangulo.h"

Triangulo::Triangulo():Abstrata(3){
    nome = "Triângulo";
}

float Triangulo::calcularArea(){
    return base*altura/2;
}

void Triangulo::lerAtributosArea(){
    cin >> base >> altura;
}

string Triangulo::getNome(){
    return nome;
}