#include "Despesa.h"

Despesa::Despesa()
{
    valor=0;
}

string Despesa::getNom(){
    return nome;
}

float Despesa::getVal(){
    return valor;
}

string Despesa::getTip(){
    return tipoDeGasto;
}

void Despesa::setNom(string nome){
    this->nome = nome;
}

void Despesa::setVal(float valor){
    this->valor = valor;
}

void Despesa::setTip(string tipoDeGasto){
    this->tipoDeGasto = tipoDeGasto;
}