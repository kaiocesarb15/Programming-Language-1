#pragma once
#include <iostream>

using namespace std;

class Insumo{
    public:
        Insumo(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomefabricante);
        virtual ~Insumo();
    
    protected:
        string nome;
        int quantidade;
        int valorUnitario;
        string dtVencimento;
        string nomefabricante;
        int tipoInsumo;
};