#pragma once
#include <iostream>

using namespace std;

class Trabalhador{
    public:
        Trabalhador();
        Trabalhador(float salario, string nome);

        string getNome();
        float getSalario();
        void setNome(string nome);
        void setSalario(float salario);

    protected:
        string nome;
        float salario;
};