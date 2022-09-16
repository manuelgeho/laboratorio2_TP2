#include <stdio.h>
#include <stdlib.h>
#define FIL 2
#define COL 3

/**
5. Sea una matriz de n�meros enteros, de dimensiones: 12 filas y 31 columnas. Contienen las precipitaciones correspondientes a un a�o entero.
Las filas corresponden a los meses y las columnas a los d�as. Se pide:
a. Hacer una funci�n para cargar la matriz de forma autom�tica.
b. Hacer una funci�n que retorne el d�a de m�xima precipitaci�n para un mes determinado.
c. Hacer una funci�n que cargue en un arreglo de 12 posiciones el resultado de aplicar la fn anterior a cada
mes de a�o.
d. Hacer la funci�n main con el men� correspondiente.

**/


///prototipados

void carga_matriz(int matriz[][COL]);
int maxima_precipitacion(int matriz[][COL]);
void arreglo_max_precipit(int matriz[][COL], int, int arreglo[12]);


///instrucciones

void carga_matriz(int matriz[FIL][COL])
{
    for(int i= 0; i<FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("Ingrese precipitacion dia %i, mes %i:\t", j+1, i+1);
            scanf("%i", &matriz[i][j]);
            printf("\n");
        }
    }
}

int maxima_precipitacion(int matriz[FIL][COL])
{
    int dia_max_precip;
    int i = 0;
    int j = 0;

    for(int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (matriz[i][j] > dia_max_precip)
            {
                dia_max_precip = matriz[i][j];

            }
        }
    }


    return dia_max_precip;
}


int main()
{
    int matriz_precipitaciones [FIL][COL];
    int arreglo_max_precipit[12];
    int mp;


    carga_matriz(matriz_precipitaciones);
    mp = maxima_precipitacion(matriz_precipitaciones);
    printf("\n Dia de maxima precipitacion:\t%i\n", mp);

    return 0;
}
