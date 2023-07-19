#pragma once
#include "Despesa.h"

class ControleDeGastos
{
    public:
        ControleDeGastos();

        void setDespesa(Despesa, int);
        Despesa getDespesa(int);
        float calculaTotalDeDespesas();
        float calculaTotalDeDespesas(string);
        bool existeDespesaDoTipo(string);

    private:
        Despesa despesas[100];
};