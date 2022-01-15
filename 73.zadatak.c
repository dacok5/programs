#include<stdio.h>
#include<conio.h>
#include<math.h>
/*Napravite program koji prebacuje sve binarne u decimalne.*/
int main()
{
    int binarni, decimalni = 0, i = 0, a;
    printf("Unesite binarni broj: ");
    scanf_s("%d", &binarni);
    while (binarni != 0)
    {
        a = binarni % 10;
        decimalni = decimalni + a * pow(2, i);
        i++;
        binarni = binarni / 10;
    }
    printf("\nDecimalna vrijednost uneseng broja iznosi = %d", decimalni);
    _getch();
    return 0;
}