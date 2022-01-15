#include<stdio.h>
#include<conio.h>
/*Napravite program koji zapisuje pozicije svih neparnih brojeva danog polja.*/
int main()
{
    int polje[10], i;
    printf("Unesite brojeve: ");
    for (i = 0; i < 10; i++)
        scanf_s("%d", &polje[i]);
    printf("\nPozicije na kojim se nalaze su:\n");
    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
            printf("%d ", polje[i]);
    }
    _getch();
    return 0;
}

/*Isti zadatak kao prosli, no sada samo u zadnjoj if petlji moramo staviti da nam je (i%2 != 0) - da nam je razlicit od nula
tj da dobimo neparnost.*/