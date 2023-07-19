// ===================================== C ===================================== //
/*#include <stdio.h>

typedef struct{
    float x;
    float y;
} tPonto;

float Distancia(tPonto p1, tPonto p2){
    float dist;
    dist = ((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y));
    return dist;
}

int main(void){
    tPonto p1;
    int n, i, iMenor;
    float d, menorDist;
    
    scanf("%f",&p1.x);
    scanf("%f",&p1.y);
    scanf("%d",&n);
    tPonto vet[n];
    
    for (i =0; i < n; i++){
        scanf("%f",&vet[i].x);
        scanf("%f",&vet[i].y);
        
        d = Distancia(p1, vet[i]);
        
        if (i == 0 || menorDist > d){
            menorDist = d;
            iMenor = i;
        }
    }
    
    printf("Ponto mais perto é (%.0lf, %.0lf)",vet[iMenor].x,vet[iMenor].y);
    
    return 0;
}*/
// ============================================================================= //

// ==================================== C++ ==================================== //
#include <iostream>

using namespace std;

typedef struct{
    float x;
    float y;
} tPonto;

float Distancia(tPonto p1, tPonto p2){
    float dist;
    dist = ((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y));
    return dist;
}

int main(void){
    tPonto p1;
    int n, i, iMenor;
    float d, menorDist;
    
    cin >> p1.x >> p1.y >> n;
    tPonto vet[n];
    
    for (i =0; i < n; i++){
        cin >> vet[i].x >> vet[i].y;
        
        d = Distancia(p1, vet[i]);
        
        if (i == 0 || menorDist > d){
            menorDist = d;
            iMenor = i;
        }
    }
    
    cout << "Ponto mais perto é (" << vet[iMenor].x << ", " << vet[iMenor].y << ")" << endl;
    
    return 0;
}
// ============================================================================= //