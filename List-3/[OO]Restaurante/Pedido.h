#pragma once
#include <iostream>

using namespace std;

class Pedido {
    public:
        Pedido();
        Pedido(int numero, string descricao, int quantidade, float preco);
        float getTotal();
        int getNumero();
        string getDescricao();
        int getQuantidade();
        float getPreco();
        void setQuantidade(float quantidade);
        
    private:
        int numero;
        string descricao;
        int quantidade;
        float preco;
};