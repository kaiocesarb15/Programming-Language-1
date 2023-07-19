#include "Pessoa.h"

Pessoa::Pessoa() : Pessoa("", Endereco(), ""){}

Pessoa::Pessoa(string nome, Endereco endereco, string telefone){
    setNome(nome);
    setEndereco(endereco);
    setTelefone(telefone);
}

string Pessoa::toString(){
    return nome + ", " + telefone + "\n" + endereco.toString();
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setEndereco(Endereco endereco){
    this->endereco = endereco;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}
