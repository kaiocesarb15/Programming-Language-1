#pragma once
#include "Funcionario.h"

class Comissionado : public Funcionario{
    public:
        Comissionado(string nome, int matricula, double vendasSemanais, double percentualComissionado);

        double calculaSalario();

    private:
        double vendasSemanais;
        double percentualComissionado;
};