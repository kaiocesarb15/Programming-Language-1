#include "Pedido.h"

Pedido::Pedido(): Pedido(0, "", 0, 0.0){}

void Pedido::setQuantidade(float quantidade){
    this->quantidade = quantidade;
}

Pedido::Pedido(int numero, string descricao, int quantidade, float preco){
    this->numero = numero;
    this->descricao = descricao;
    setQuantidade(quantidade);
    this->preco = preco;
}

float Pedido::getTotal(){
    return getQuantidade() * getPreco();
}

int Pedido::getNumero(){
    return numero;
}

string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getQuantidade(){
    return quantidade;
}

float Pedido::getPreco(){
    return preco;
}