#pragma once
#include <iostream>

using namespace std;

class Endereco{
    public:
        Endereco();
        Endereco(string rua, int numero, string bairro, string cidade, string estado, string cep);

        string toString();

        void setRua(string rua);
        void setNumero(int numero);
        void setBairro(string bairro);
        void setCidade(string cidade);
        void setEstado(string estado);
        void setCep(string cep);

    private:
        string rua;
        int numero;
        string bairro;
        string cidade;
        string estado;
        string cep;
};