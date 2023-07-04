#include <stdio.h>
int main (){
    float b,a;
    printf ("introduzca la base del rectangulo");
    scanf ("%f",&b);
    printf ("introduzca la altura del rectangulo");
    scanf ("%f",&a);
    float area= b*a;
    printf ("El area del rectangulo de base %.2f y altura %.2f es:%2.f",b,a,area);
}