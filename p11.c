#include <stdio.h>
int main(){
    float pesos[5];
    float suma=0;
    for (int i=0;i<5;i++){
        printf("introduce un peso para almacenar");
        scanf ("%f",&pesos[i]);
        suma=suma+pesos[i];
    }
    float promedio=suma/5;
    int cM=0;
    int cMn=0;
    for (int i=0;i<5;i++){
        if (pesos[i]>=promedio){
            cM++;
        }
        else{
            cMn++;
        }
    }
    printf("el promedio de pesos es %.2f",promedio);
    printf("numero dde pesos mayores o iguales que el promedio:%d,numero de pesos menores al promeio %d",cM,cMn);
}