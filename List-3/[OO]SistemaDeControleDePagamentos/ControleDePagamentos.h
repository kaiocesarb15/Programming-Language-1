#pragma once
#include <iostream>
#include "Pagamento.h"

class ControleDePagamentos{
    public:
        ControleDePagamentos();

        void setPagamento(Pagamento p, int index);
        Pagamento getPagamento(int pos);
        float calculaTotalDePagamentos();
        int getIndexFuncionario(string nomeFuncionario);

    private:
        Pagamento pagamentos[10];
};