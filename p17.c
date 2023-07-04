#include <stdio.h>
int main(){
    float vector[5];
    for (int i=0;i<5;i++){
        printf("intoduce un numero real");
        scanf("%f",&vector[i]);
    }
    float *puntero =&vector[0];
    float media=0;

    for (int i = 0; i < 5; i++)
    {
        media=media+ *(puntero+i);
    }
    media=media/5;
    printf("la media de los valores del vector es %2.f",media);
}