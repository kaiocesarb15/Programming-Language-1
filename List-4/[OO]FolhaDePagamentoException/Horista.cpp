#include "Horista.h"

Horista::Horista(string nome, int matricula, double salarioPorHora, double horasTrabalhadas)
: Funcionario(nome, matricula){
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::calculaSalario(){
    int normal = (horasTrabalhadas <= 40) ? horasTrabalhadas : 40;
    int extra = (horasTrabalhadas - 40) >=0 ? horasTrabalhadas -40: 0; 

    return ((normal * salarioPorHora) + (extra * salarioPorHora * 1.5)) * 4;
}