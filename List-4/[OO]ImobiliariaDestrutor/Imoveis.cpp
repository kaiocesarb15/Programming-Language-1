#include "Imoveis.h"

Imoveis::Imoveis(int tipo){
    this->tipo = tipo;
}

Imoveis::~Imoveis(){
    cout << "Deletando Imovel" << endl;
}

void Imoveis::lerAtributos(){
    cin >> valor >> disponibilidade;
}

void Imoveis::exibeAtributos(){
    cout << nome << " para " << disponibilidade << ". ";
}

string Imoveis::getNome(){
    return nome;
}

string Imoveis::getDisp(){
    return disponibilidade;
}