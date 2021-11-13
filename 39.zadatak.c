#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Omogucite korisniku unos broja te ispisite unatrag sve brojeve od unesenog broja pa da nule.*/
int main()
{
    int i;
    int br;

   
    printf("Unesite broj: ");
    scanf_s("%d", &br);

    for (i = br; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}

/*Omogucujemo korisniku unos broja. "Obrnutom" for petljom dobivamo rjesenje zadataka tj. samo dekrementiramo s i-- da nam ide od najvece
vrijednosti prema manjoj.*/