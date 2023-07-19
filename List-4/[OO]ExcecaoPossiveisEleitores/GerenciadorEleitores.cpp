#include "GerenciadorEleitores.h"

GerenciadorEleitores::GerenciadorEleitores(){}

void GerenciadorEleitores::cadastrarEleitor(string nome, int idade, int titulo){
    eleitores.push_back(Eleitor(nome, idade, titulo));
}

void GerenciadorEleitores::verificaMenoridade(Eleitor *eleitor){
    if(eleitor->getIdade() < 16)
        throw underflow_error("Eleitor " + eleitor->getNome() + " não pode ser cadastrado");
}

void GerenciadorEleitores::verificaPendenciaIdade(Eleitor *eleitor){
    if(eleitor->getIdade() > 20)
        throw overflow_error("Eleitor " + eleitor->getNome() + " com pendência");
}

void GerenciadorEleitores::verificaEleitores(){
    for(int i=0; i<eleitores.size(); i++){
        try{
            verificaMenoridade(&eleitores[i]);
            verificaPendenciaIdade(&eleitores[i]);
        }catch(underflow_error &e){
            cout << e.what() << endl;
        }catch(overflow_error &e){
            cout << e.what() << endl;
        }
    }
}