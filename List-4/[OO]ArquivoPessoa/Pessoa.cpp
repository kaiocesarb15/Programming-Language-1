#include "Pessoa.h"

Pessoa::Pessoa(int tipo, string nome, string telefone, string cpf){
    setTipo(tipo);
    setNome(nome);
    setTelefone(telefone);
    setCpf(cpf);
}

int Pessoa::getTipo(){
    return tipo;
}

void Pessoa::setTipo(int tipo){
    this->tipo = tipo;
}

string Pessoa::getNome(){
    return nome;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

string Pessoa::getCpf(){
    return cpf;
}

void Pessoa::setCpf(string cpf){
    this->cpf = cpf;
}
