#include <stdio.h>
int main(){
    int numero;
    printf("introduze un numero");
    scanf("%d",numero);
    FILE *f;
    f=fopen("tabla.txt","w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(f,"%d",i*numero);
    }
    fclose(f);
    
}