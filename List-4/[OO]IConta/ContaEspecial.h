#pragma once
#include "Conta.h"

class ContaEspecial : public Conta{
    public:
        ContaEspecial(string nomeCliente, int numeroConta, double salarioMensal);

        void definirLimite();
};