// ================================ C ================================ //
/*#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} tData;

int MaisVelho(tData d1, tData d2){
    if(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia == d2.dia)
        return 0;
    else if(d1.ano < d2.ano)
        return 1;
    else if(d1.ano > d2.ano)
        return -1;
    else if(d1.mes < d2.mes)
        return 1;
    else if(d1.mes > d2.mes)
        return -1;
    else if(d1.dia < d2.dia)
        return 1;
    else if(d1.dia > d2.dia)
        return -1;
}

int main(void){
    tData data1, data2;
    
    scanf("%d%d%d", &data1.dia, &data1.mes, &data1.ano);
    scanf("%d%d%d", &data2.dia, &data2.mes, &data2.ano);
    
    if(MaisVelho(data1, data2) == 1)
        printf("Pessoa 1 é mais velha");
    else if(MaisVelho(data1, data2) == -1)
        printf("Pessoa 2 é mais velha");
    else if(MaisVelho(data1, data2) == 0)
        printf("Pessoas são da mesma idade");
    
    return 0;
}*/
// =================================================================== //

// =============================== C++ =============================== //
#include <iostream>

using namespace std;

typedef struct{
    int dia;
    int mes;
    int ano;
} tData;

int MaisVelho(tData d1, tData d2){
    if(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia == d2.dia)
        return 0;
    else if(d1.ano < d2.ano)
        return 1;
    else if(d1.ano > d2.ano)
        return -1;
    else if(d1.mes < d2.mes)
        return 1;
    else if(d1.mes > d2.mes)
        return -1;
    else if(d1.dia < d2.dia)
        return 1;
    else if(d1.dia > d2.dia)
        return -1;
}

int main(void){
    tData data1, data2;
    
    cin >> data1.dia >> data1.mes >> data1.ano;
    cin >> data2.dia >> data2.mes >> data2.ano;
    
    if(MaisVelho(data1, data2) == 1)
        cout << "Pessoa 1 é mais velha" << endl;
    else if(MaisVelho(data1, data2) == -1)
        cout << "Pessoa 2 é mais velha" << endl;
    else if(MaisVelho(data1, data2) == 0)
        cout << "Pessoas são da mesma idade" << endl;
    
    return 0;
}
// =================================================================== //