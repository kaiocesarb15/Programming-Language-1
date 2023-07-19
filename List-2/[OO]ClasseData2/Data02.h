#pragma once
#include <iostream>

using namespace std;

class Data02
{
    public:
        Data02();
        void PrintData();
        int getDia();
        int getMes();
        int getAno();
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

    private:
        int dia;
        int mes;
        int ano;
};