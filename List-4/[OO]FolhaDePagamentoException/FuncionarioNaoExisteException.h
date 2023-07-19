#pragma once
#include <iostream>
#include <exception>

using namespace std;

class FuncionarioNaoExisteException : public exception{
    public:
        FuncionarioNaoExisteException(string nome);

        string what();
    
    private:
        string mensagem;
};