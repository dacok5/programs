#include<stdio.h>

/*Omogucite korisniku unos broja i potencije s kojom zeli uneseni broj potencirati. Ispisite rezultat*/

int main()
{
    int br1, br2;

    printf("Unesite broj i potenciju: ");
    scanf_s("%d %d", &br1, &br2);

    long rez = potencija(br1, br2);
    printf("Rezultat = %ld", rez);

    return 0;
}

long potencija (int a, int b)
{
    long rez = 1;
    for (int i = 1; i <= b; i++)
    {
        rez *= a;
    }
    return rez;
}
/*U funkciji smo definirali da nam je tip rezultata long (jer potencije nam stvaraju veliki promjene vrijednosti broja),
Rezultat smo postavili na vrijednost 1 jer ne mozemo postaviti na 0 jer se potencije ponasaju kao mnozenje.*/