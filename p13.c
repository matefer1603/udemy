#include <stdio.h>
int main(){
    int info[3][4]={{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int sTb=0,sTm=0,sTa=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (j==1){
                sTb=sTb+info[i][j];
            }
            if (j==2){
                sTm=sTm+info[i][j];
            }
            if (j==3){
                sTa=sTa+info[i][j];
            }
        }
        
    }
    float ptb=sTb/3;
    float ptm=sTm/3;
    float pta=sTa/3;
    printf("el promedio de temperatura baja es %2.f temperatura media %2.f el de temperatura alta %2.f",ptb,ptm,pta);
    
}