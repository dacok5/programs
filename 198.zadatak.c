/* Napravite program i provjerite jesu li dvije unesene matrice simetricne */

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], b[10][10], Count = 1;

    printf("\n Unesite broj redova i stupaca :  ");
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
        for (columns = 0; columns < j; columns++)
        {
            b[columns][rows] = a[rows][columns];
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            if (a[rows][columns] != b[rows][columns])
            {
                Count++;
                break;
            }
        }
    }
    if (Count == 1)
    {
        printf("\n Matrica je simetricna ");
    }
    else
    {
        printf("\n Matrica nije simetricna ");
    }

    return 0;
}