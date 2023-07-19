#pragma once
#include <iostream>

using namespace std;

class Pedido{
    public:
        Pedido(float valorUnitario, int quantidade);

        float getTotal();
        void toString();

    private:
        float valorUnitario;
        int quantidade;
};