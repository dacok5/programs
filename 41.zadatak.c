#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Omogucite korisniku unos nekog broja. Izracunajte sumu prve i zadnje znamenke te ispisite na ekran.*/
int main() {

    int num, suma = 0, prvi, zadnji;

    printf("Unesite broj: ");
    scanf_s("%d", &num);

    zadnji = num % 10;

    prvi = num;

    while (num >= 10)
    {
        num = num / 10;
    }
    prvi = num;

    suma = prvi + zadnji;

    printf("Suma prve i zadnje znamenke je: %d", suma);
    return 0;
}
/*Omogucili smo korisniku unos nekog broja. %10 funkcijom izbijamo zadnju znamenku i spremamo ju u varijablu prvi. Ako unosimo neke vece
brojeve moramo se osigurati i podijeliti ih s 10 da dobimo samo jednu znamenku te na kraju samo zbrojimo nase znamenke i ispisemo na ekran.*/