#include "Pedido.h"

Pedido::Pedido(float valorUnitario, int quantidade){
    this->valorUnitario = valorUnitario;
    this->quantidade = quantidade;
}

float Pedido::getTotal(){
    return valorUnitario * quantidade;
}

void Pedido::toString(){
    cout << "R$ " << valorUnitario << ", quant: " << quantidade << ", total: R$ " << getTotal() << endl;
}