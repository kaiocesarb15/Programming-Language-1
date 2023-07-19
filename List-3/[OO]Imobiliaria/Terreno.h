#pragma once
#include "Imoveis.h"

class Terreno : public Imoveis{
    public:
        Terreno();

        void lerAtributos();
        void exibeAtributos();

    private:
        float area;
};