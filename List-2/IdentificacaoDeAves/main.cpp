#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void){
    int n;
    string codigo = "";
    
    map<string, string>aves;
    aves["coruja"] = "01011";
    aves["pardal"] = "00010";
    aves["galinha"] = "00110";
    aves["ema"] = "01000";
    aves["falcão"] = "01010";
    aves["pato"] = "10010";
    aves["pinguim"] = "11000";
    aves["gaivota"] = "11010";
    aves["garça"] = "11011";
    aves["avestruz"] = "00000";
    
    for(int i=0; i<5; i++){
        cin >> n;
        codigo += to_string(n);
    }
    
    for(auto animal : aves){
        if(animal.second == codigo){
            cout << animal.first << endl;
            break;
        }
    }
    
    return 0;
}