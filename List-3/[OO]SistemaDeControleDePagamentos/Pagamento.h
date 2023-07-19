#pragma once
#include <iostream>

using namespace std;

class Pagamento{
    public:
        Pagamento();

        float getValor();
        string getNome();
        void setValor(float);
        void setNome(string);

    private:
        float valorPagamento;
        string nomeDoFuncionario;
};