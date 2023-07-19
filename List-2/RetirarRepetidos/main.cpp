#include <iostream>

using namespace std;

int main(void){
    int i, j, n;
    
    cin >> n;
    int ar[n];
    
    for(i=0; i<n; i++){
        cin >> ar[i];
    }
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(ar[i] == ar[j])
                ar[j] = 0;
        }
    }
    
    for(i=0; i<n; i++){
        if(ar[i] != 0)
            printf("%d%s", ar[i], i==n-1?"":" ");
    }
    
    return 0;
}