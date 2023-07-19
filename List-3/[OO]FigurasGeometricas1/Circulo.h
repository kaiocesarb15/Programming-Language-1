#pragma once
#include "Abstrata.h"

class Circulo : public Abstrata{
    public:
        Circulo();

        float calcularArea();
        void lerAtributosArea();
        string getNome();

    private:
        float raio;
};