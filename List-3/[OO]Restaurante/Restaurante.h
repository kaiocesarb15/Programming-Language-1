#pragma once
#include "MesaDeRestaurante.h"

class Restaurante {
    public:
        Restaurante();
        void adicionarPedido(Pedido pedido, int mesa);
        float calculaTotalRestaurante();
        MesaDeRestaurante *getMesa(int mesa);
        
    private:
        MesaDeRestaurante *mesas[10];
};