#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade, string telefone)
{
    setNom(nome);
    setIda(idade);
    setTel(telefone);
}

string Pessoa::getNom(){
    return this->nome;
}

int Pessoa::getIda(){
    return this->idade;
}

string Pessoa::getTel(){
    return this->telefone;
}

void Pessoa::setNom(string nome){
    this->nome = nome;
}

void Pessoa::setIda(int idade){
    this->idade = idade;
}

void Pessoa::setTel(string telefone){
    this->telefone = telefone;
}