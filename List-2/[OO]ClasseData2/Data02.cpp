#include "Data02.h"

Data02::Data02()
{
    dia = mes = ano = 1;
}

int Data02::getDia(){
    return dia;
}

int Data02::getMes(){
    return mes;
}

int Data02::getAno(){
    return ano;
}

void Data02::setDia(int d){
    dia = d;
}

void Data02::setMes(int m){
    mes = m;
}

void Data02::setAno(int a){
    ano = a;
}

void Data02::PrintData(){
    string meses[] = {"Indefinido", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    cout << dia << " de ";

    if(mes < 0 || mes > 12)
        cout << meses[0];
    else
        cout << meses[mes];

    cout << " de " << ano << endl;
}