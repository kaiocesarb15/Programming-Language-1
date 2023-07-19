#pragma once
#include <iostream>

using namespace std;

class Invoice02{
    public:
        Invoice02(int, string, int, float);

        int getNum();
        string getDes();
        int getQua();
        float getPre();

        void setNum(int);
        void setDes(string);
        void setQua(int);
        void setPre(float);

        void print();
        float getInvoiceAmount(int, float);

    private:
        int numero;
        string descricao;
        int quantidade;
        float preco;
};