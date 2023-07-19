#pragma once
#include "Insumo.h"

class Medicamento : public Insumo{
    public:
        Medicamento(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomefabricante, string dosagem, string administracao, string disponibilizacao);
        ~Medicamento();
    
    private:
        string dosagem;
        string administracao;
        string disponibilizacao;
};