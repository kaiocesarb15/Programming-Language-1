#pragma once
#include "Abstrata.h"

class Triangulo : public Abstrata{
    public:
        Triangulo();

        float calcularArea();
        void lerAtributosArea();
        string getNome();

    private:
        float base;
        float altura;
};