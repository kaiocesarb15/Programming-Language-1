#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
    for(auto i=0; i<10; i++){
        pedidos[i] = new Pedido();
    }
}

void MesaDeRestaurante::adicionarPedido(Pedido pedido){
    int repetido = 0;
    setUso(1);
    
    for(auto i=0; i<10; i++){
        if(pedido.getNumero() == pedidos[i]->getNumero()){
            float qntd = 0;
            qntd = pedidos[i]->getQuantidade() + pedido.getQuantidade();
            pedidos[i]->setQuantidade(qntd);
            repetido = 1;
            break;
        }
    }

    if(repetido == 0){
        for(int i=0; i<10; i++){
            if(pedidos[i]->getNumero() == 0){
                pedidos[i] = new Pedido(pedido);
                return;
            }
        }
    }
}

void MesaDeRestaurante::zeraPedidos(){
    for(auto i=0; i<10; i++){
        if(pedidos[i]->getNumero() != 0)
            delete pedidos[i];
    }
}

float MesaDeRestaurante::calculaTotal(){
    float total = 0;
    
    for(auto i=0; i<10; i++){
        if(pedidos[i]->getNumero() != 0)
            total+= pedidos[i]->getTotal();
    }
    return total;
}

void MesaDeRestaurante::exibeConta(){
    for(auto i=0; i<10; i++){
        if(pedidos[i]->getNumero() != 0)
            cout << pedidos[i]->getNumero() << " - " << pedidos[i]->getDescricao() << " - " 
            << pedidos[i]->getQuantidade() << " - " << pedidos[i]->getPreco() << " - R$ " << pedidos[i]->getTotal() << endl;
    }
}

int MesaDeRestaurante::getUso(){
    return uso;
}

void MesaDeRestaurante::setUso(int uso){
    this->uso = uso;
}