#include<stdio.h>
#include<conio.h>
/*Napravite program koji broji sve parne i sve neparne brojeve unutar danog polja.*/
int main()
{
    int polje[10], parni = 0, neparni = 0, i;
    printf("Unesite 10 brojeva: ");
    for (i = 0; i < 10; i++)
        scanf_s("%d", &polje[i]);
    for (i = 0; i < 10; i++)
    {
        if (polje[i] % 2 == 0)
            parni++;
        else
            neparni++;
    }
    printf("\nUkupan broj parnih = %d", parni);
    printf("\nUkupan broj neparnih = %d", neparni);
    _getch();
    return 0;
}