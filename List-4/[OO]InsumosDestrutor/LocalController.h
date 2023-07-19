#pragma once
#include <iostream>
#include <vector>
#include "Insumo.h"

using namespace std;

class LocalController{
    public:
        LocalController();
        ~LocalController();
    
        void addInsumoArr(Insumo *in, int index);
        void addInsumoVec(Insumo *in);

    private:
        string nome;
        int tipo;
        Insumo *insumoArr[3];
        vector<Insumo*> insumoVec;
};