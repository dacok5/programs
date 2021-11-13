#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Omogucite korisniku unos broja te mu zamijenite prvu i zadnju znamenku.*/
int main(void) {

    int num;
    int prvi;
    int zadnji;
    int temp;
    int swap;
    int count = 0;

    printf("Unesite neki broj: ");
    scanf_s("%d", &num);

    temp = num;
    zadnji = temp % 10;
    count = (int)log10(temp);

    while (temp >= 10)
    {
        temp /= 10;
    }
    prvi = temp;
    swap = (zadnji * pow(10, count) + prvi) + (num - (prvi * pow(10, count) + zadnji));

    printf("Zadnja znamenka: %d\n", zadnji);

    printf("Prva znamenka: %d\n", prvi);

    return 0;
}
