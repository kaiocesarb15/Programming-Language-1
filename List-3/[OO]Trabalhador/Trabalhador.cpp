#include "Trabalhador.h"

Trabalhador::Trabalhador() : Trabalhador(0.0, ""){}

Trabalhador::Trabalhador(float salario, string nome){
    setSalario(salario);
    setNome(nome);
}

string Trabalhador::getNome(){
    return nome;
}

float Trabalhador::getSalario(){
    return salario;
}
void Trabalhador::setNome(string nome){
    this->nome = nome;
}

void Trabalhador::setSalario(float salario){
    this->salario = salario;
}