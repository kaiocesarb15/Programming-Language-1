#pragma once
#include <iostream>

using namespace std;

class invoice{
    public:
        invoice();
        float getInvoiceAmount();

        std::string descricao;
        int quantidade;
        float preco;
        int numero;
};