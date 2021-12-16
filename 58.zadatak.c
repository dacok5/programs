#include <stdio.h>
/*Napravite program koji ce odrediti najveci uneseni broj, koristite pointersku notaciju.*/
int main()
{
    int num1, num2, num3;
    int* p1, * p2, * p3;

    
    printf("Unesite prvi broj: ");
    scanf_s("%d", &num1);
    printf("Unesite drugi broj: ");
    scanf_s("%d", &num2);
    printf("Unesite treci broj: ");
    scanf_s("%d", &num3);

   
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    if (*p1 > * p2)
    {
        if (*p1 > * p3)
        {
            printf("%d je najveci broj", *p1);
        }
        else
        {
            printf("%d je najveci broj", *p3);
        }
    }
    else
    {
        if (*p2 > * p3)
        {
            printf("%d je najveci broj", *p2);
        }
        else
        {
            printf("%d je najveci broj", *p3);
        }
    }
    return 0;
}
/*Ovo je vrlo jednostavan zadatak koji se moze rjesavati bez pointera samo if petljama, no kao uvod u pointere ovaj 
zadatak ce biti vrlo jasan. Unosimo 3 broja koja smo kasnije u programu izjednacili s pointerima p1,p2 i p3 te if petljama
provjeravamo koji je veci od kojeg.*/