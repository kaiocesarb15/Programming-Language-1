#include "Comissionado.h"

Comissionado::Comissionado(string nome, int matricula, double vendasSemanais, double percentualComissionado)
: Funcionario(nome, matricula){
    this->vendasSemanais = vendasSemanais;
    this->percentualComissionado = percentualComissionado;
}

double Comissionado::calculaSalario(){
    return vendasSemanais*percentualComissionado;
}