#pragma once
#include <iostream>

using namespace std;

class Imoveis{
    public:
        Imoveis(int tipo);
        virtual ~Imoveis();

        virtual void lerAtributos()=0;
        virtual void exibeAtributos()=0;
        
        virtual string getNome();
        virtual string getDisp();

    protected:
        string nome;
        float valor;
        int tipo;
        string disponibilidade;
};