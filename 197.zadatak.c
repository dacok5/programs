/* Napravi program koji racuna sumu elemenata sporedne dijagonale.*/

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], Sum = 0;

    printf("\n Unesite broj stupaca i redaka  :  ");
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
        Sum = Sum + a[rows][i - rows - 1];
    }

    printf("\n Suma sporedne dijagonale  =  %d", Sum);

    return 0;
}