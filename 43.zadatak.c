#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Omogucite korisniku unos nekog broja. Izracunajte razliku prve i zadnje znamenke te ispisite na ekran.*/
int main() {

    int num, razlika = 0, prvi, zadnji;

    printf("Unesite broj: ");
    scanf_s("%d", &num);

    zadnji = num % 10;

    prvi = num;

    while (num >= 10)
    {
        num = num / 10;
    }
    prvi = num;

    razlika = prvi - zadnji;

    printf("Razlika prve i zadnje znamenke je: %d", razlika);
    return 0;
}
/*Omogucili smo korisniku unos nekog broja. %10 funkcijom izbijamo zadnju znamenku i spremamo ju u varijablu prvi. Ako unosimo neke vece
brojeve moramo se osigurati i podijeliti ih s 10 da dobimo samo jednu znamenku te na kraju samo oduzmemo nase znamenke i ispisemo na ekran.*/