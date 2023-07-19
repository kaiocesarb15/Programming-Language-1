#include <iostream>
#include "Data02.h"

using namespace std;

int main()
{
    Data02 data;
    int n;

    cin >> n;
    data.setDia(n);
    cin >> n;
    data.setMes(n);
    cin >> n;
    data.setAno(n);

    data.PrintData();

    return 0;
}