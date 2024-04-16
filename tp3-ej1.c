#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarMatriz(int matriz[4][11]);

void mostrarMatriz(int matriz[4][11]);

void promedioAnio(int matriz[4][11]);

void mayorYminimo(int matriz[4][11]);

int main(){

srand(time(NULL));

int matriz[4][11];

cargarMatriz(matriz);

mostrarMatriz(matriz);

promedioAnio(matriz);

mayorYminimo(matriz);

return 0;

}

void cargarMatriz(int matriz[4][11]){

    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < 12; j++)
        {
            
            matriz[i][j] = rand() % (50000 - 10000 + 1) + 10000;

        }
        

    }

}

void mostrarMatriz(int matriz[4][11]){


    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < 12; j++)
        {
            
            printf("[%i] ",matriz[i][j]);

        }
        
        printf("\n\n");

    }


}

void promedioAnio(int matriz[4][11]){

    int aux = 0;

    for (int i = 0; i < 5; i++){
        
        for (int j = 0; j < 12; j++)
        {
            
            aux = aux + matriz[i][j];

        }

        aux = aux / 12;

        printf("\n\nEl Promedio de ventas para el anio numero %i es de: %i", i+1, aux);

        aux = 0;

    }



}

void mayorYminimo(int matriz[4][11]){

    int minimo = 60000, maximo = 0,anioMax,mesMax,anioMin,mesMin;

    for (int i = 0; i < 5; i++){
        
        for (int j = 0; j < 12; j++)
        {
            
            if (maximo < matriz[i][j])
            {

                maximo = matriz[i][j];
                anioMax = i+1;
                mesMax = j+1;

            }

            if (minimo > matriz[i][j])
            {

                minimo = matriz[i][j];
                anioMin = i+1;
                mesMin = j+1;

            }

        }
        

    }    

    printf("\n\nEl valor Maximo es: %i (anio: %i, mes: %i)",maximo,anioMax,mesMax);
    printf("\n\nEl valor Minimo es: %i (anio: %i, mes: %i)",minimo,anioMin,mesMin);

}
