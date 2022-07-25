/*Pronadite prosjek unesenih brojeva pomocu pointera i dinamicke alokacije*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n, * p, sum = 0, i;
    float prosjek;

    printf("Koliko brojeva ces unijeti: ");
    scanf("%d", &n);

    p = (int*)malloc(sizeof(int));

    if (p == NULL)
    {
        printf("\nALokacija memorije neuspjesna.\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nUnesi broj %d : ", i + 1);
        scanf("%d", p + i);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }

    printf("\nSuma od %d brojeva je %d \n", n, sum);

    prosjek = (float)sum / n;

    printf("\nProsjek od %d brojeva je %0.2f \n", n, prosjek);

    return 0;
}