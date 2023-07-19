#pragma once
#include <iostream>
#include <exception>

using namespace std;

class OrcamentoEstouradoException : public exception{
    public:
        OrcamentoEstouradoException(double total);

        string what();
        
    private:
        string mensagem;
};