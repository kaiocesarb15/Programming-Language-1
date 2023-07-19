#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora() : TrabalhadorPorHora(0.0, ""){}

TrabalhadorPorHora::TrabalhadorPorHora(float valorDaHora, string nome)
: Trabalhador(0.0, nome){
    this->valorDaHora = valorDaHora;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    float horasExtras = 0.0;
    float salarioSemanal;
    
    if(horasSemanais > 40){
        horasExtras = horasSemanais - 40;
        horasSemanais = 40;
    }
    salarioSemanal = valorDaHora*horasSemanais + horasExtras*1.5*valorDaHora;
    setSalario(salarioSemanal*4);

    return salarioSemanal;
}