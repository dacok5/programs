/*Program treba naci sve parne i neparne brojeve u polja te ispisati njihov broj*/

#include<stdio.h>

int main()
{
    int polje[10], P = 0, N = 0, i;
    printf("Unesite 10 brojeva: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &polje[i]);
    for (i = 0; i < 10; i++)
    {
        if (polje[i] % 2 == 0)
            P++;
        else
            N++;
    }
    printf("\nUkupan broj parnih brojeva je = %d", P);
    printf("\nUkupan broj neparnih brojeva je = %d", N);
    return 0;
}