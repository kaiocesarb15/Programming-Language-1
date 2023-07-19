#pragma once
#include "Funcionario.h"

class Consultor : public Funcionario{
    public:
        Consultor();

        float getSalario();
        float getSalario(float);

    protected:

    private:
};