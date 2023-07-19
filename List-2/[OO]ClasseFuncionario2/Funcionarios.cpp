#include "Funcionarios.h"

Funcionarios::Funcionarios(string nome, string sobrenome, float salario){
    setNom(nome);
    setSob(sobrenome);
    setSal(salario);
}

float Funcionarios::getSalarioAnual(){
    return this->salario*12;
}

void Funcionarios::aumentaSalario(float percent){
    this->percent = (salario + salario*percent)*12;
}

void Funcionarios::setNom(string nome){
    this->nome = nome;
}

void Funcionarios::setSob(string sobrenome){
    this->sobrenome = sobrenome;
}

void Funcionarios::setSal(float salario){
    if(salario < 0)
        salario = 0;
    this->salario = salario;
}

string Funcionarios::getNom(){
    return this->nome;
}

string Funcionarios::getSob(){
    return this->sobrenome;
}

float Funcionarios::getSal(){
    return this->salario;
}