#pragma once
#include "IConta.h"

class Conta : public IConta{
    public:
        Conta(string nomeCliente, int numeroConta, double salarioMensal);

        string getNome();
        int getNumeroConta();
        double getSalario();

        virtual void definirLimite();
        double saldoTotalDisponivel();
        void sacar(double valor);
        void depositar(double valor);

    protected:
        string nomeCliente;
        int numeroConta;
        double salarioMensal;
        double saldo;
        double limite;
};