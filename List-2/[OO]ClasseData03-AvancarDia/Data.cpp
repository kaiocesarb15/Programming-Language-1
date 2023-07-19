#include "Data.h"

Data::Data(int dia, int mes, int ano)
{
    setMes(mes);
    setDia(dia);
    setAno(ano);
}

void Data::setDia(int dia){
    if(dia >= 1 && dia <= getDaysMonth(mes))
        this->dia = dia;
    else{
        cout << "Atributo dia Inválido" <<endl;
        this->dia = 1;
    }
}

void Data::setMes(int mes){
    if(mes >= 1 && mes <=12)
        this->mes = mes;
    else{
        cout << "Atributo mês Inválido" <<endl;
        this->mes = 1;
    }
}

void Data::setAno(int ano){
    this->ano = ano;
}

string Data::getDia(){
    if(dia < 10)
        return "0" + to_string(dia);
    else
        return to_string(dia);
}

string Data::getMes(){
    if(mes < 10)
        return "0" + to_string(mes);
    else
        return to_string(mes);
}

int Data::getAno(){
    return this->ano;
}

void Data::printData(){
    cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}

int Data::getDaysMonth(int mes){
    if(mes == 2)
        return 28;
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        return 31;
    return 30;
}

void Data::avancaDia(){
    dia++;
    if(dia > getDaysMonth(mes)){
        dia = 1;
        mes++;

        if(mes > 12){
            mes = 1;
            ano++;
        }
    }
}