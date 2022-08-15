/*Napravite program koji u matrici mijenja dijagonale*/

#include<stdio.h>

int main()
{
    int i, j, rows, columns, arr[10][10], temp;

    printf("\n Unesite broj stupaca i redova  :  ");
    scanf("%d %d", &i, &j);

    printf("\n Unesite elemente matrica \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &arr[rows][columns]);
        }
    }

    if (rows == columns)
    {
        for (rows = 0; rows < i; rows++)
        {
            temp = arr[rows][rows];
            arr[rows][rows] = arr[rows][i - rows - 1];
            arr[rows][i - rows - 1] = temp;
        }

        printf("\n Elementi matrice nakon zamjene dijagonala: \n");
        for (rows = 0; rows < j; rows++)
        {
            for (columns = 0; columns < i; columns++)
            {
                printf("%d \t ", arr[rows][columns]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n ThMatrica koju ste unijeli nije kvadratna matrica");
    }

    return 0;
}