#pragma once
#include "Abstrata.h"

class Retangulo : public Abstrata{
    public:
        Retangulo();

        float calcularArea();
        void lerAtributosArea();
        string getNome();

    private:
        float base;
        float altura;
};