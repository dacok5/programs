#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Omogucite korisniku unos broja. Ispisite prvu i zadnju znamenku unesenog broja.*/
int main()
{
    int num;
    int prvi;
    int zadnji;
    printf("Unesite broj : ");
    scanf_s("%d", &num);

    zadnji = num % 10;
    printf("Zadnja znamenka je: %d\n", zadnji);

    while (num >= 10)
    {
        num = num / 10;
    }

    printf("Prva znamenka je : %d\n", num);
    return 0;
}
/*Omogucili smo korisniku unos broja. %10 funckijom izbijamo zadnju znamenku, % nam oznacavam modulo broja. While petljom osiguravamo
da dobijemo prvu znamenku dijeljenjem naseg unesenog broja.*/