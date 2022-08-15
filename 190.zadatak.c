/* Od obicne matrice napravite donju trokutastu matricu.*/

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10];

    printf("\n Unesite broj stupaca i redaka :  ");
    scanf("%d %d", &i, &j);

    printf("\n Unesite elemente matrica \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        printf("\n");
        for (columns = 0; columns < j; columns++)
        {
            if (rows >= columns)
            {
                printf("%d ", a[rows][columns]);
            }
            else
            {
                printf("0  ");
            }
        }
    }

    return 0;
}