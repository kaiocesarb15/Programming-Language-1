#pragma once
#include "Funcionario.h"

class Assalariado : public Funcionario{
    public:
        Assalariado(string nome, int matricula, double salario);

        double calculaSalario();

    private:
        double salario;
};