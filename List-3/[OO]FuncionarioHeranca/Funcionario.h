#pragma once
#include <iostream>

using namespace std;

class Funcionario{
    public:
        Funcionario();

        virtual int getMatricula();
        virtual string getNome();
        virtual float getSalario();

        virtual void setMatricula(int);
        virtual void setNome(string);
        virtual void setSalario(float);

    protected:
        int matricula;
        string nome;
        float salario;
};