#pragma once
#include <iostream>

using namespace std;

class Funcionario{
    public:
        Funcionario(string nome, int matricula);

        virtual double calculaSalario()=0;

        string getNome();
        void setNome(string nome);
        int getMatricula();
        void setMatricula(int matricula);

    private:
        string nome;
        int matricula;
};