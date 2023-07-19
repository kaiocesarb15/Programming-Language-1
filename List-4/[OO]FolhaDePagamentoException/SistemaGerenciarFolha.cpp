#include "SistemaGerenciarFolha.h"

SistemaGerenciarFolha::SistemaGerenciarFolha(double orcamento){
    this->orcamento = orcamento;
    index = 0;
}

void SistemaGerenciarFolha::setFuncionario(Funcionario *funcionario){
    funcionarios.push_back(funcionario);
}

double SistemaGerenciarFolha::calcularValorTotalFolha(){
    double total = 0;
    for(int i=0; i<funcionarios.size(); i++){
        total += funcionarios[i]->calculaSalario();
    }

    if(total<orcamento)
        return total;
    else 
        throw OrcamentoEstouradoException(total);
}

double SistemaGerenciarFolha::consultaSalarioFuncionario(string nome){
    for (int i=0; i<3; i++){
        if(funcionarios[i]->getNome().find(nome) != string::npos)
            return funcionarios[i]->calculaSalario();
    }

    throw FuncionarioNaoExisteException(nome);
}
