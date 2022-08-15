/* Napravite program koji racuna gornje trokutastu matricu*/

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], Sum = 0;

    printf("\n Unesite broj redaka i stupaca :  ");
    scanf("%d %d", &i, &j);

    printf("\n Unesite broj elemenata matrice \n");
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
            if (columns > rows)
            {
                Sum = Sum + a[rows][columns];
            }
        }
    }

    printf("\n Suma gornje trokutaste matrice = %d", Sum);
    return 0;
}