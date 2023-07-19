#include "Restaurante.h"

Restaurante::Restaurante()
{
    for(auto i=0; i<10; i++){
        mesas[i] = new MesaDeRestaurante();
    }
}

void Restaurante::adicionarPedido(Pedido pedido, int mesa){
    if(mesas[mesa] == nullptr){
        mesas[mesa] = new MesaDeRestaurante();
    }
    mesas[mesa]->adicionarPedido(pedido);
}

float Restaurante::calculaTotalRestaurante(){
    float total = 0;
    for(auto i=0; i<10; i++){
        if(mesas[i]->getUso() != 0)
            total+= mesas[i]->calculaTotal();
    }
    return total;
}

MesaDeRestaurante *Restaurante::getMesa(int mesa){
    return mesas[mesa];
}