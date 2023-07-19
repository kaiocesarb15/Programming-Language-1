#pragma once
#include <vector>
#include "Imoveis.h"

class Imobiliaria{
    public:
        Imobiliaria();
        ~Imobiliaria();

        void addImovel(Imoveis *imovel);
        void buscarImovel(string busca);

    private:
        vector<Imoveis*> imoveis;
};