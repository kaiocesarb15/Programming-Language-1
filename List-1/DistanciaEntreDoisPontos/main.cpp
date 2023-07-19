// ================================= C ================================= //
/*#include <stdio.h>

typedef struct{
    float x;
    float y;
} tPonto;

float Distancia(tPonto p1, tPonto p2){
    float dist;
    dist = (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y);
    
    return dist;
}

int main(void){
    tPonto p1, p2;
    
    scanf("%f", &p1.x);
    scanf("%f", &p1.y);
    scanf("%f", &p2.x);
    scanf("%f", &p2.y);
    
    printf("%.0f", Distancia(p1, p2));
    
    return 0;
}*/
// ===================================================================== //

// ================================ C++ ================================ //
#include <iostream>

using namespace std;

typedef struct{
    float x;
    float y;
} tPonto;

float Distancia(tPonto p1, tPonto p2){
    float dist;
    dist = (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y);
    
    return dist;
}

int main(void){
    tPonto p1, p2;
    
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    
    cout << Distancia(p1, p2);
    
    return 0;
}
//===================================================================== //