#pragma once
#include "Insumo.h"

class EPI : public Insumo{
    public:
        EPI(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomefabricante, string tipo, string descricao);
        ~EPI();

    private:
        string tipo;
        string descricao;
};