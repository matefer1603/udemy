#include <stdio.h>
int main (){
    int pb,km;
    float cs,pf;
    printf ("introduce el precio base del vehiculo");
    scanf("%d",&pb);
    printf ("introduce el kilometraje del vehiculo");
    scanf("%d",&km);
    printf ("introduce el consumo del vehiculo");
    scanf("%f",&cs);
    if (km<20000 && cs<=5){
        pf=pb*1.2;
    }
    else if (km>20000 && cs<=5){
        pf=pb*1.1;
    }
    else if (cs>5){
        pf=pb*1.05;
    }
    printf ("el precio final del vehiculo es:%.2f",pf);
    return 0;
}