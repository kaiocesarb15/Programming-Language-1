#pragma once
#include <iostream>

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        float getSalarioAnual();

        string nome;
        string sobrenome;
        float salario;
};