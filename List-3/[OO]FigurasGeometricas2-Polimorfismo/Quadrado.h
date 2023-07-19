#pragma once
#include "Abstrata.h"

class Quadrado : public Abstrata
{
    public:
        Quadrado();

        float calcularArea();
        void lerAtributosArea();
        string getNome();

    private:
        float lado;
};