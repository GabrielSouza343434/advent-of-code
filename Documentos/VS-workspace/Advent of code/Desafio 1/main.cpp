#include <iostream>
#include <vector>
#include <string>
#include "vetores.h"
#include <algorithm>
#include <cmath>

using namespace std;


int main(){
    
    sort(lista_esquerda.begin(), lista_esquerda.end());
    sort(lista_direita.begin(), lista_direita.end());

/* 
    for(int i = 0; i < lista_esquerda.size(); i++){
        cout << lista_esquerda[i] << " " << lista_direita[i] << "\n" ;
        ordenado_comparado.emplace_back(lista_esquerda[i] - lista_direita[i]);
        
    };*/
    
    int total = 0;

    for(int i = 0; i < lista_direita.size(); i++){
       total += abs(lista_esquerda[i] - lista_direita[i]);
        
       cout << total << "\n";
    };

    
    
    cout << total;
   /* for(int i = 0; i < lista_direita.size(); i++){
        cout << lista_direita[i] << "\n";
    };*/



//este é o array1
 


};