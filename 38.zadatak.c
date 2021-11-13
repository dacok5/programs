#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Omogucite korisniku unos broja, svaki broj oduzmite s vrijednoscu od 1 do 10 te napravite tablicu.*/
int main()
{
    int i;
    int broj;

    printf("Unesite broj: ");
    scanf_s("%d", &broj);

    for (i = 1; i <= 10; i++)
    {

        printf("%d - %d = %d\n", broj, i, (broj - i));
    }

    return 0;
}
/*Omogucili smo korisniku da unese broj te svaki uneseni broj smo oduzeli s vrijednostima od 1 do 10 te napravili "tablicu".*/