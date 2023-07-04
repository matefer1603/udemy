#include <stdio.h>
int main(){
    struct jugador{
        char nombre[50];
        int edad;
        float altura;
    };
    struct jugador jugadores[5];
    for (int i=0;i<5;i++){
        printf("introduce el nombre del jugador %d",i+1);
        gets(jugadores[i].nombre);
        printf("introduce el nombre del jugador %d",i+1);
        scanf("%d",&jugadores[i].edad);
        printf("introduce el altura del jugador %d",i+1);
        scanf("%f",&jugadores[i].altura);
        fflush(stdin);
    }
    int opcion=-1;
    while (opcion!=-1)
    {
        printf("Introduce la opcion a elegir:1 lista jugador/2 busqueda jugador/3 jugador mas alto /salir");
        scanf("%d",opcion);

        if (opcion==1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("jugador de nombre %s y altura %2.f",jugadores[i].nombre,jugadores[i].altura);
            }
        }
        if (opcion==2)
        {
            char nombreJugador[50];
            printf("introduce el nombre del jugador a buscar");
            gets(nombreJugador);
            int encontrado=0;

            for (int i = 0; i < 5; i++)
            {
                if (strcmp(jugadores[i].nombre,nombreJugador)==0)
                {
                    encontrado=1;
                    printf("la edad del jugador es %d y su altura %2.f",jugadores[i].edad,jugadores[i].altura);
                }
                
            }
            if (encontrado==0)
            {
                printf("jugador no encontrado");
            }
            
        }
        if (opcion==3)
        {
            float mayorAltura=jugadores[0].altura;
            char nmMayAlt[50];
            int eMA=jugadores[0].edad;
            strcpy(nmMayAlt,jugadores[0].nombre);
            for (int i = 0; i < 5; i++)
            {
                if (jugadores[i].altura>mayorAltura)
                {
                    strcpy(nmMayAlt,jugadores[i].nombre);
                    eMA=jugadores[i].edad;
                    mayorAltura=jugadores[i].altura;
                }
                
            }
            printf("el nombre de mayor altura es %s y su edad es %d",nmMayAlt,eMA);
            
        }
        
        
    }
    
    
    
    
}