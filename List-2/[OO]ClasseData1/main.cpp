#include <iostream>
#include "Data.h"

using namespace std;

int main(void){
    Data hoje;

    cin >> hoje.dia >> hoje.mes >> hoje.ano;
    cout << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;

    return 0;
}
