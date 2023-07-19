#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado() : TrabalhadorAssalariado(0.0, ""){}

TrabalhadorAssalariado::TrabalhadorAssalariado(float salario, string nome)
: Trabalhador(salario, nome){}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario/4;
}