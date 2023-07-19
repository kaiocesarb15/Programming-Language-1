#pragma once
#include "Funcionario.h"

class Horista : public Funcionario{
    public:
        Horista(string nome, int matricula, double salarioPorHora, double horasTrabalhadas);

        double calculaSalario();

    private:
        double salarioPorHora;
        double horasTrabalhadas;
};