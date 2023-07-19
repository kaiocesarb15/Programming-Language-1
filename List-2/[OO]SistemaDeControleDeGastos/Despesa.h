#pragma once
#include <iostream>

using namespace std;

class Despesa
{
    public:
        Despesa();

        string getNom();
        float getVal();
        string getTip();

        void setNom(string);
        void setVal(float);
        void setTip(string);

    private:
        string nome;
        float valor;
        string tipoDeGasto;
};