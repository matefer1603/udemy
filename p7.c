#include <stdio.h>
int main (){
    int dia;
    printf ("introduce un numero del 1 al 7");
    scanf ("%d",&dia);
    switch (dia)
    {
    case 1:
        printf("lunes");
        break;
    case 2:
        printf("martes");
        break;
    case 3:
        printf("miercoles");
        break;
    case 4:
        printf("jueves");
        break;
    case 5:
        printf("viernes");
        break;
    case 6:
        printf("sabado");
        break;
    case 7:
        printf("domingo");
        break;
    default:
        printf ("dato invalido");
    }
}