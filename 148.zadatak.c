/*Napravite program koji pristupa dvodimenzionalno polju preko pointera*/

#include <stdio.h>

#define red 3
#define stupac 3

void inputMatrix(int matrica[][stupac], int red, int stupac);
void printMatrix(int matrica[][stupac], int red, int stupac);



int main()
{
    int matrica[red][stupac];
    int i, j;

    printf("Unesite elemente %dx%d matrice.\n", red, stupac);
    inputMatrix(matrica, red, stupac);

    printf("Elementi %dx%d matrice.\n", red, stupac);
    printMatrix(matrica, red, stupac);


    return 0;
}

void inputMatrix(int matrica[][stupac], int red, int stupac)
{
    int i, j;


    for (i = 0; i < red; i++)
    {
        for (j = 0; j < stupac; j++)
        {
           
            scanf("%d", (*(matrica + i) + j));
        }
    }
}


void printMatrix(int(*matrica)[stupac], int red, int stupac)
{
    int i, j;


    for (i = 0; i < red; i++)
    {
        for (j = 0; j < stupac; j++)
        {
        
            printf("%d ", *(*(matrica + i) + j));
        }

        printf("\n");
    }
}