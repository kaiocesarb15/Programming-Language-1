#include "Circulo.h"

Circulo::Circulo():Abstrata(4){
    nome = "Círculo";
}

float Circulo::calcularArea(){
    return 3.14*raio*raio;
}

void Circulo::lerAtributosArea(){
    cin >> raio;
}

string Circulo::getNome(){
    return nome;
}