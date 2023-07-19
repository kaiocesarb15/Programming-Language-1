// =================================== C =================================== //
/*#include <stdio.h>

void Matriz(int mat[][10], int x, int y){
    int i, j;
    
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void SomaMatriz(const int m1[][10], const int m2[][10], int x, int y){
    int ms[x][y];
    int i, j;
    
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            ms[i][j] = m1[i][j] + m2[i][j];
            if(j != 0)
                printf(" ");
            printf("%d", ms[i][j]);
        }
        if(i != x-1)
            printf("\n");
    }
}

int main(void){
    int x, y, i, j;
    
    scanf("%d %d", &x, &y);
    int m1[x][10], m2[x][10];
    
    Matriz(m1, x, y);
    Matriz(m2, x, y);
    
    SomaMatriz(m1, m2, x, y);
    
    return 0;
}*/
// ========================================================================= //

// ================================== C++ ================================== //
#include <iostream>

using namespace std;

void Matriz(int mat[][10], int x, int y){
    int i, j;
    
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            cin >> mat[i][j];
        }
    }
}

void SomaMatriz(const int m1[][10], const int m2[][10], int x, int y){
    int ms[x][y];
    int i, j;
    
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            ms[i][j] = m1[i][j] + m2[i][j];
            if(j != 0)
                cout << " ";
            cout << ms[i][j];
        }
        if(i != x-1)
            cout << "\n";
    }
}

int main(void){
    int x, y, i, j;
    
    cin >> x >> y;
    int m1[x][10], m2[x][10];
    
    Matriz(m1, x, y);
    Matriz(m2, x, y);
    
    SomaMatriz(m1, m2, x, y);
    
    return 0;
}
// ========================================================================= //