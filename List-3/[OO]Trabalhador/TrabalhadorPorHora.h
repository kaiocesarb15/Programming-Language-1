#pragma once
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(float valorDaHora, string nome);

        float calcularPagamentoSemanal(int horasSemanais);

    private:
        float valorDaHora;
};