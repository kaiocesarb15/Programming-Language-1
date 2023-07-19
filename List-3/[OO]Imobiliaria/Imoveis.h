#pragma once
#include <iostream>

using namespace std;

class Imoveis{
    public:
        Imoveis(int tipo);

        virtual void lerAtributos()=0;
        virtual void exibeAtributos()=0;

    protected:
        string nome;
        float valor;
        int tipo;
        string disponibilidade;
};