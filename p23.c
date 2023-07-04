#include <stdio.h>

struct producto
{
    int codigo;
    char descripcion[50];
    float precio;
};
int main(){
    struct producto *prod;
    prod=malloc(sizeof(struct producto));
    printf("introduce el codigo");
    scanf ("%d",&prod->codigo);
    printf("introduce la descripcion");
    scanf ("%d",&prod->descripcion);
    printf("introduce el precio");
    scanf ("%d",&prod->precio);

    printf("codigo del articulo %d",prod->codigo);
    printf("descripcion %s",prod->descripcion);
    printf("precio %f",prod->precio);

    free(prod);
    prod=NULL;
}
    
