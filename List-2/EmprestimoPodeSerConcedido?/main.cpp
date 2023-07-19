#include <iostream>

using namespace std;

int main(void){
    int i, ar[3];
    
    for(i=0; i<3; ){
        cin >> ar[i];
        
        if(ar[i] > 0)
            i++;
    }
    
    if(ar[1]/ar[2] < ar[0]*0.3)
        cout << "Emprestimo pode ser concedido" << endl;
    else
        cout << "Emprestimo nao pode ser concedido" << endl;

    return 0;
}