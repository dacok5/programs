/*Napravite program koji sumira svaki element retka u matrici. */

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], Sum;

    printf("Unesite broj redaka i stupaca matrice :  ");
    scanf("%d %d", &i, &j);

    printf("Unesite elemente matrice \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        Sum = 0;
        for (columns = 0; columns < j; columns++)
        {
            Sum = Sum + a[rows][columns];
        }
        printf("Suma elemenata redaka =  %d \n", Sum);
    }

    return 0;
}