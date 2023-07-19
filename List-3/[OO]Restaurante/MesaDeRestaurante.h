#pragma once
#include "Pedido.h"

class MesaDeRestaurante {
    public:
        MesaDeRestaurante();
        void adicionarPedido(Pedido pedido);
        void zeraPedidos();
        float calculaTotal();
        void exibeConta();
        int getUso();
        void setUso(int uso);
    
    private:
        Pedido *pedidos[10];
        int uso=0;
};