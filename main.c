#include <stdio.h>

void hallarvalor(float A[4], float B[4]); //Va en funciones.h

int main(int argc, char *argv[]) //Va en main.c
{
    float A[4] = {7, -3, 0.4, -2};
    float B[4] = {0.1, -7.3, 9, 0};

    hallarvalor(A, B);

    return 0;
}

void hallarvalor(float A[4], float B[4]) //Va en funciones.c
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            float numeros = (A[i] * B[j]);

            if (numeros <= 0 )
            {
                numeros = 0;
            }

            printf("%.2f\t", numeros);
        }
        printf("\n");
    }
}