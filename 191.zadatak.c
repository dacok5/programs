/* Napravite matricu koja ce zbrojiti elemente glavne dijagonale, isprintajte sumu elemenata. */

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
        Sum = Sum + a[rows][rows];
    }

    printf("\n Zbroj/suma elemenata matrice jednak je:  %d", Sum);

    return 0;
}