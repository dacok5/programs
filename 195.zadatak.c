/* Napravi program koji ce oduzeti dvije matrice*/

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], b[10][10];
    int Subtraction[10][10];

    printf("\n Unesite broj redaka i stupaca  :  ");
    scanf("%d %d", &i, &j);

    printf("\n Unesite elemente prve matrice \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }

    printf("\n Unesite elemente druge matrice \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &b[rows][columns]);
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            Subtraction[rows][columns] = a[rows][columns] - b[rows][columns];
        }
    }

    printf("\n Nakon oduzimanja, b = a - b \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            printf("%d \t ", Subtraction[rows][columns]);
        }
        printf("\n");
    }
    return 0;
}