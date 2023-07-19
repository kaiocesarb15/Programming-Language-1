#include "Funcionario.h"

Funcionario::Funcionario(string nome, int matricula){
    setNome(nome);
    setMatricula(matricula);
}

string Funcionario::getNome(){
    return nome;
}

void Funcionario::setNome(string nome){
    this->nome = nome;
}

int Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}