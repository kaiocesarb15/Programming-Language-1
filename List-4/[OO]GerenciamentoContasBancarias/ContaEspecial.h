#pragma once
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente{
    public:
        ContaEspecial(string nomeCliente, int numero, double salario);

        void definirLimite();
};