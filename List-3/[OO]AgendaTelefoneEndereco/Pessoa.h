#pragma once
#include "Endereco.h"
#include <iostream>

using namespace std;

class Pessoa{
    public:
        Pessoa();
        Pessoa(string nome, Endereco endereco, string telefone);

        string toString();

        void setNome(string nome);
        void setEndereco(Endereco endereco);
        void setTelefone(string telefone);

    private:
        string nome;
        Endereco endereco;
        string telefone;
};