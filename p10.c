#include <stdio.h>
int main (){
    int suma=0,contador=0,numero=-1;

    while (numero !=0)
    {
        printf ("introduce un numero");
        scanf("%d",&numero);
        contador++;
        suma += numero;
    }
    float promedio=suma/contador;
    printf("la suma de todos los numeros es:%d y el promedio es: %.2f",suma,promedio);

    return 0;
}