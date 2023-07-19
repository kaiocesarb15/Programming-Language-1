#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    int dia, mes, ano;
    int mais, i;

    cin >> dia >> mes >> ano;
    Data data(dia, mes, ano);

    cin >> mais;

    for(i=0; i<mais; i++){
        data.avancaDia();
    }

    data.printData();

    return 0;
}