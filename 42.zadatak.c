#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Omogucite korisniku unos nekog broja. Izracunajte produkt prve i zadnje znamenke te ispisite na ekran.*/
int main() {

    int num, produkt = 1, prvi, zadnji;

    printf("Unesite broj: ");
    scanf_s("%d", &num);

    zadnji = num % 10;

    prvi = num;

    while (num >= 10)
    {
        num = num / 10;
    }
    prvi = num;

    produkt = prvi * zadnji;

    printf("Produkt prve i zadnje znamenke je: %d", produkt);
    return 0;
}
/*Omogucili smo korisniku unos nekog broja. %10 funkcijom izbijamo zadnju znamenku i spremamo ju u varijablu prvi. Ako unosimo neke vece
brojeve moramo se osigurati i podijeliti ih s 10 da dobimo samo jednu znamenku te na kraju samo pomnozimo nase znamenke i ispisemo na ekran.*/