#pragma once
#include "Funcionario.h"
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"
#include <vector>

class SistemaGerenciarFolha{
    public:
        SistemaGerenciarFolha(double orcamento);
        
        void setFuncionario(Funcionario *funcionario);
        double calcularValorTotalFolha();
        double consultaSalarioFuncionario(string nome);

    private:
        vector <Funcionario*> funcionarios;
        double orcamento;
        int index;
};