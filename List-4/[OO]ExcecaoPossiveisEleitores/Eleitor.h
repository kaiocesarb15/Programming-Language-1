#pragma once
#include <iostream>

using namespace std;

class Eleitor{
    public:
        Eleitor(string nome, int idade, int titulo);

        string getNome();
        int getIdade();

    private:
        string nome;
        int idade;
        int titulo;
};