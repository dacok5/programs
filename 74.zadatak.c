#include<stdio.h>
#include<conio.h>
/*Napravite program u kojem prikazujete linearno pretrazivanje.*/
int main()
{
    int polje[5], i, num, pos;
    printf("Unesite bilo kojih 5 brojeva: ");
    for (i = 0; i < 5; i++)
        scanf_s("%d", &polje[i]);
    printf("\nUnesite broj za pretrazivanje: ");
    scanf_s("%d", &num);
    for (i = 0; i < 5; i++)
    {
        if (polje[i] == num)
        {
            pos = i;
            break;
        }
    }
    printf("\nBroj pronaden na indeksu:%d", pos);
    _getch();
    return 0;
}
/*U ovom programu prikazujemo linearno pretrazivanje. Prolazimo kroz cijelo polje te trazeni broj spremamo, tj. spremamo
mu poziciju na kojoj se nalazi te printamo to rjesenje.*/