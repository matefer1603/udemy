#include <stdio.h>
#include <math.h>
int main(){
    struct cilindro
    {
        float diametro;
        float carrera;
    };
    struct motor
    {
        int identificador;
        struct cilindro cilindro1;
        int nmCilindro;
        float cilindrada;
    };
    struct motor motor1;

    printf("Introduce el identificador");
    scanf("%d",&motor1.identificador);
    printf("Introduce el diametro del cilindro");
    scanf("%d",&motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro");
    scanf("%d",&motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros");
    scanf("%d",&motor1.nmCilindro);
    
    motor1.cilindrada=(motor1.nmCilindro*(motor1.cilindro1.carrera/10)*3.14*pow((motor1.cilindro1.diametro/10),2))/4;
    printf("identificador:%d",motor1.identificador);
    printf("diametro(nm):%d",motor1.cilindro1.diametro);
    printf("carrera(nm):%d",motor1.cilindro1.carrera);
    printf("N° cilindros:%d",motor1.nmCilindro);
    printf("cilindrada:%d",motor1.cilindrada);
}