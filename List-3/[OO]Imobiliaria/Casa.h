#pragma once
#include "Imoveis.h"

class Casa : public Imoveis{
    public:
        Casa();

        void lerAtributos();
        void exibeAtributos();

    private:
        int nPavimentos;
        int nQuartos;
        float areaTerreno;
        float areaConstruida;
};