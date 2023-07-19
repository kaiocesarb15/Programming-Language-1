#pragma once
#include <iostream>

using namespace std;

class Data
{
    public:
        Data(int, int, int);

        string getDia();
        string getMes();
        int getAno();

        void setDia(int);
        void setMes(int);
        void setAno(int);

        void printData();
        void avancaDia();
        int getDaysMonth(int);

    private:
        int dia;
        int mes;
        int ano;
};