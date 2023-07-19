#pragma once
#include <iostream>

using namespace std;

class Conta{
    public:
        Conta(string nomeCliente, int numero);

        string getNomeCliente();
        int getNumero();
        double getSaldo();

        void sacar(double valor);
        virtual void depositar(double valor);

    protected:
        string nomeCliente;
        int numero;
        double saldo;
};