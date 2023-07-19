#pragma once
#include <iostream>

using namespace std;

class Pessoa{
    public:
        Pessoa(string, int, string);

        string getNom();
        int getIda();
        string getTel();

        void setNom(string);
        void setIda(int);
        void setTel(string);

    private:
        string nome;
        int idade;
        string telefone;
};