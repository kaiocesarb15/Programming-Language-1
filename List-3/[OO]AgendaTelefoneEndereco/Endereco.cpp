#include "Endereco.h"

Endereco::Endereco() : Endereco("", 0, "", "", "", ""){}

Endereco::Endereco(string rua, int numero, string bairro, string cidade, string estado, string cep){
    setRua(rua);
    setNumero(numero);
    setBairro(bairro);
    setCidade(cidade);
    setEstado(estado);
    setCep(cep);
}

string Endereco::toString(){
    return rua + ", " + to_string(numero) + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + cep;
}

void Endereco::setRua(string rua){
    this->rua = rua;
}

void Endereco::setNumero(int numero){
    this->numero = numero;
}

void Endereco::setBairro(string bairro){
    this->bairro = bairro;
}

void Endereco::setCidade(string cidade){
    this->cidade = cidade;
}

void Endereco::setEstado(string estado){
    this->estado = estado;
}


void Endereco::setCep(string cep){
    this->cep = cep;
}
