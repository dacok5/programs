/* Pronadi sumu svakog retka i stupca matrice*/

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], Sum;

    printf("\n Unesite broj stupaca i redaka :  ");
    scanf("%d %d", &i, &j);

    printf("\n Unesite elemente matrice \n");
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
        printf("\n Suma elemenata redaka =  %d", Sum);
    }

    for (rows = 0; rows < i; rows++)
    {
        Sum = 0;
        for (columns = 0; columns < j; columns++)
        {
            Sum = Sum + a[columns][rows];
        }
        printf("\n Suma elemenata stupaca =  %d", Sum);
    }

    return 0;
}