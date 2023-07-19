#pragma once
#include <iostream>

using namespace std;

class Abstrata{
    public:
        Abstrata(int);

        virtual float calcularArea() = 0;
        virtual void lerAtributosArea() = 0;
        virtual string getNome() = 0;

    protected:
        string nome;
        //int tipo;
};