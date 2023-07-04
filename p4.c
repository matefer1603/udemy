#include <stdio.h>
int main(){
    float dolares;
    printf("introduce la cantidad de dolares a convertir");
    scanf("%f",&dolares);
    printf("%2.f dolares equivalen a %2.f euros",dolares,dolares*0.92);
}