#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include "Eleitor.h"

class GerenciadorEleitores{
    public:
        GerenciadorEleitores();

        void cadastrarEleitor(string nome, int idade, int titulo);
        void verificaEleitores();
    
    private:
        vector<Eleitor> eleitores;

         void verificaMenoridade(Eleitor *eleitor);
         void verificaPendenciaIdade(Eleitor *eleitor);
};