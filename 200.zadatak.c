/*Napravite program koji ce unesenu matricu transponirati.*/
#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], b[10][10];

    printf("\nUnesite broj redaka i stupaca\n");
    scanf("%d %d", &i, &j);

    printf("\n Unesite elemnte matrice \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }


    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            b[columns][rows] = a[rows][columns];
        }
    }

    printf("\n Transponirana matrica : \n");
    for (rows = 0; rows < j; rows++)
    {
        for (columns = 0; columns < i; columns++)
        {
            printf("%d \t ", b[rows][columns]);
        }
        printf("\n");
    }

    return 0;
}