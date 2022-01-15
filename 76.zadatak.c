#include<stdio.h>
#include<conio.h>
/*Napravite program koji zapisuje sve pozicije parnih brojeva.*/
int main()
{
    int polje[10], i;
    printf("Unesite 10 brojeva: ");
    for (i = 0; i < 10; i++)
        scanf_s("%d", &polje[i]);
    printf("\nPozicije su :\n");
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            printf("%d ", polje[i]);
    }
    _getch();
    return 0;
}
/*U ovom programu prvo trazimo korisnika da unese 10 brojeva. Prolaskom kroz drugu for petljom prolazimo kroz unesene brojeve 
te sve parne brojeve ispisujemo (ne ispisujemo parni broj vec ispisujemo poziciju gdje se parni broj nalazi).*/