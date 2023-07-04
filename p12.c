#include <stdio.h>
#include <stdlib.h>
int main (){
    int numeros[10]={4,7,9,75,-5,6,12,-18,0,1};
    int maximo = numeros[0];
    int minimo = numeros[0]; 
    for (int i=1;i<10;i++){
        if (vector[i]>maximo){
            maximo=vector[i];
        }
        if (vector[i]<minimo){
            minimo=vector[i];
        }
    }
    printf("el valr maximo es:%d el valor minimo es %d",maximo,minimo);
}