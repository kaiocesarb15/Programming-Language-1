#pragma once
#include "Conta.h"

class Poupanca : public Conta{
    public:
        Poupanca(string nomeCliente, int numero);

        int getVariacao();
        double getTaxaRendimento();

        void render();

    private:
        int variacao;
        double taxaRendimento;
};