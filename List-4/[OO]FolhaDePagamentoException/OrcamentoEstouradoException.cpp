#include "OrcamentoEstouradoException.h"

OrcamentoEstouradoException::OrcamentoEstouradoException(double total){
    mensagem = "OrcamentoEstouradoException " + to_string(int(total));
}

string OrcamentoEstouradoException::what(){
    return mensagem;
}