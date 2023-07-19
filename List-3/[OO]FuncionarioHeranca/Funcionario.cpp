#include "Funcionario.h"

Funcionario::Funcionario(){
    setMatricula(0);
    setNome("");
    setSalario(0.0);
}

int Funcionario::getMatricula(){
    return matricula;
}

string Funcionario::getNome(){
    return nome;
}

float Funcionario::getSalario(){
    return salario;
}

void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}

void Funcionario::setNome(string nome){
    this->nome = nome;
}

void Funcionario::setSalario(float salario){
    this->salario = salario;
}