#include <stdio.h>

int main(){
    int nota;
    printf ("introduce la nota del alumno");
    scanf("%d",&nota);

    if (nota<5){
        printf ("suspendio");
    }
    else if (nota == 6){
        printf ("aceptable");
    }
    else if (nota == 8 || nota ==7){
        printf ("bien");
    }
    else if (nota == 9 || nota ==10){
        printf ("exelente");
    }
    else {
        printf ("valor invalido");
    }
    return 0;
}
