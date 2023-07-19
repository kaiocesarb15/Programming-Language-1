//======================================== C ========================================//
/*#include <stdio.h>

int MatrizEsparsa(int m[][10], int x, int y){
    int i, j;
    int cont0=0, cont1=0;
    
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            scanf("%d", &m[i][j]);
            
            if(m[i][j] == 0)
                cont0++;
            else
                cont1++;
        }
    }
    if(cont0*100.0 / (cont0+cont1) > 70)
        return 1;
    else
        return 0;
}

int main(void){
    int i, j;
    int x, y, matriz[10][10];
    
    scanf("%d%d", &x, &y);
    
    if(MatrizEsparsa(matriz, x, y))
        printf("A matriz é esparsa");
    else
         printf("A matriz não é esparsa");
    
    return 0;
}*/
//=====================================================================================//

//======================================== C++ ========================================//
#include <iostream>

using namespace std;

bool MatrizEsparsa(int m[][10], int x, int y){
    int i, j;
    int cont0=0, cont1=0;
    
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            cin >> m[i][j];
            
            if(m[i][j] == 0)
                cont0++;
            else
                cont1++;
        }
    }
    if(cont0*100.0 / (cont0+cont1) > 70)
        return true;
    else
        return false;
}

int main(void){
    int i, j;
    int x, y, matriz[10][10];
    
    cin >> x >> y;
    
    if(MatrizEsparsa(matriz, x, y))
        cout << "A matriz é esparsa" << endl;
    else
        cout << "A matriz não é esparsa" << endl;
    
    return 0;
}
//=====================================================================================//