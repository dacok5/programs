#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Omogucite korisniku unos broja. Nadite zadnju znamenku unesenog broja te ispisite na ekran.*/
int main()
{
    int num;
    int zadnja;
    printf("Unesite broj : ");
    scanf_s("%d", &num);

    zadnja = num % 10;
    printf("Zadnja znamenka je: %d\n", zadnja);

    return 0;
}
/*Rjesenje u proslim zadacima (primjerima).*/