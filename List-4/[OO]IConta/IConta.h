#pragma once
#include <iostream>

using namespace std;

class IConta{
    public:
        IConta();

        virtual double saldoTotalDisponivel()=0;
        virtual void sacar(double valor)=0;
        virtual void depositar(double valor)=0;
};