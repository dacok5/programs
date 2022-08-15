/*Napravite program koji ce odrediti sumu donje trokutaste matrice.*/
#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], Sum = 0;

    printf("\n Unesite broj redaka i stupaca  :  ");
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
            if (rows > columns)
            {
                Sum = Sum + a[rows][columns];
            }
        }
    }

    printf("\n Suma donje trokutaste matrice = %d", Sum);
    return 0;
}