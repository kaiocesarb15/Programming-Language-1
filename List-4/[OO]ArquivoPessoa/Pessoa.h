#pragma once
#include <iostream>

using namespace std;

class Pessoa{
    public:
        Pessoa(int tipo, string nome, string telefone, string cpf="");

        int getTipo();
        void setTipo(int tipo);
        string getNome();
        void setNome(string nome);
        string getTelefone();
        void setTelefone(string telefone);
        string getCpf();
        void setCpf(string cpf);

    private:
        int tipo;
        string nome;
        string telefone;
        string cpf;

};