/*Napravite program koji zbraja sve elemente stupaca matrice*/

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], Sum;

    printf("Unesite velicinu matrice  :  ");
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
            Sum = Sum + a[columns][rows];
        }
        printf("Suma stupaca matrice =  %d \n", Sum);
    }

    return 0;
}