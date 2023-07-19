#include "Eleitor.h"

Eleitor::Eleitor(string nome, int idade, int titulo){
    this->nome = nome;
    this->idade = idade;
    this->titulo = titulo;
}

string Eleitor::getNome(){
    return nome;
}

int Eleitor::getIdade(){
    return idade;
}