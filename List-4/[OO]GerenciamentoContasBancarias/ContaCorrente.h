#pragma once
#include "Conta.h"

class ContaCorrente : public Conta{
    public:
        ContaCorrente(string nomeCliente, int numero, double salario);

        double getSalario();
        double getLimite();

        virtual void definirLimite();
    
    protected:
        double salario;
        double limite;
};