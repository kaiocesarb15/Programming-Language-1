#pragma once
#include "Insumo.h"

class Vacina : public Insumo{
    public:
        Vacina(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomefabricante, string tipo, int quantDoses, int intervalo);
        ~Vacina();
    
    private:
        string tipo;
        int quantDoses;
        int intervalo;
};