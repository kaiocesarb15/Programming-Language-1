#include "Quadrado.h"

Quadrado::Quadrado():Abstrata(1){
    nome = "Quadrado";
}

float Quadrado::calcularArea(){
 return lado*lado;
}

void Quadrado::lerAtributosArea(){
    cin >> lado;
}

string Quadrado::getNome(){
    return nome;
}