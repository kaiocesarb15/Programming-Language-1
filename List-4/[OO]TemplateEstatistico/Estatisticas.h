#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Estatisticas{
    public:
        int indexOfMaior(vector <T> vec){
            T maior = vec[0];
            int maiorIndex=0;

            for(int i=0; i<vec.size(); i++){
                if(vec[i].getTotal() > maior.getTotal()){
                    maior = vec[i];
                    maiorIndex = i;
                }
            }
            
            return maiorIndex;
        }

        int indexOfMenor(vector <T> vec){
            T menor = vec[0];
            int menorIndex=0;

            for(int i=0; i<vec.size(); i++){
                if(vec[i].getTotal() < menor.getTotal()){
                    menor = vec[i];
                    menorIndex = i;
                }
            }
            
            return menorIndex;
        }

        float media(vector <T> vec){
            float soma=0;

            for(int i=0; i<vec.size(); i++){
                soma += vec[i].getTotal();
            }
            
            return soma / vec.size();
        }
};