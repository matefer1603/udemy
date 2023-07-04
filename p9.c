#include <stdio.h>
int main (){
    int n,cA=0,cS=0;
    float nt;
    printf ("introduce el numero de alumnos");
    scanf ("%d",&n);
    for (int i=1; i<=n;i++){
        printf("introduce la nota del alumno %d",i);
        scanf("%f",&nt);
        if (nt>=5){
            cA++;
        }
        else {
            cS++;
        }
    }
    printf ("El numero de alumnos aprobado es %d y suspendidos es %d",cA,cS);
    return 0;
}