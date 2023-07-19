#include <iostream>
#include "Funcionario.h"
#include "Horista.h"
#include "Comissionado.h"
#include "Assalariado.h"
#include "OrcamentoEstouradoException.h"
#include "SistemaGerenciarFolha.h"
#include "FuncionarioNaoExisteException.h"

using namespace std;

int main(){
    SistemaGerenciarFolha *folha;
    double orcamento;
    string nome;
    int matricula;
    double valor, extra;

    cin >> orcamento;
    folha = new SistemaGerenciarFolha(orcamento);

    for(int i=0; i<3; i++){
        cin.ignore();
        getline(cin, nome);
        cin >> matricula >> valor;
        if(i!=0)
            cin >> extra;
        if(i==0)
            folha->setFuncionario(new Assalariado(nome, matricula, valor));
        else if(i==1)
            folha->setFuncionario(new Horista(nome, matricula, valor, extra));
        else
            folha->setFuncionario(new Comissionado(nome, matricula, valor, extra));
    }

    cin.ignore();
    for(int i=0; i<3; i++){
        getline(cin, nome);
        
        try{
            cout << folha->consultaSalarioFuncionario(nome) << endl;
            
        }catch(FuncionarioNaoExisteException e){
            cout << e.what() << endl;
        }
    }
    
    try{
        cout << folha->calcularValorTotalFolha() << endl;
    }catch(OrcamentoEstouradoException e){
        cout << e.what() << endl;
    }
   
    return 0;
}