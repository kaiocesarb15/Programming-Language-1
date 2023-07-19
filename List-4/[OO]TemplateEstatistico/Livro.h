#pragma once
#include <iostream>

using namespace std;

class Livro{
    public:
        Livro(string titulo, int totalPaginas);

        int getTotal();
        void toString();
    
    private:
        string titulo;
        int totalPaginas;
};