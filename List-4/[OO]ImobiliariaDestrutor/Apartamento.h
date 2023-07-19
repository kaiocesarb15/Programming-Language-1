#pragma once
#include "Imoveis.h"

class Apartamento : public Imoveis{
    public:
        Apartamento();
        ~Apartamento();

        void lerAtributos();
        void exibeAtributos();

    private:
        float area;
        int nQuartos;
        int andar;
        float valorCondominio;
        int nGaragem;
};