#pragma once
#include <iostream>

using namespace std;

class Funcionarios{
    public:
        Funcionarios(string, string, float);

        float getSalarioAnual();
        void aumentaSalario(float);

        string getNom();
        string getSob();
        float getSal();

        void setNom(string);
        void setSob(string);
        void setSal(float);

        float percent;

    private:
        string nome;
        string sobrenome;
        float salario;
};