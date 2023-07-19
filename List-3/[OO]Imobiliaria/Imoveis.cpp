#include "Imoveis.h"

Imoveis::Imoveis(int tipo){
    this->tipo = tipo;
}

void Imoveis::lerAtributos(){
    cin >> valor >> disponibilidade;
}

void Imoveis::exibeAtributos(){
    cout << nome << " para " << disponibilidade << ". ";
}