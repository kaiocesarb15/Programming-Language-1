#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException(string nome){
    mensagem = "FuncionarioNaoExisteException " + nome;
}

string FuncionarioNaoExisteException::what(){
    return mensagem;
}