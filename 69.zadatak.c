#include<stdio.h>
#include<conio.h>
#include<math.h>
/*Napisite program koji prebacuje oktalne brojeve u decimalne.*/
int main()
{
    int oktalni, decimalni = 0, i = 0, a;
    printf("Unesite oktalni broj: ");
    scanf_s("%d", &oktalni);
    while (oktalni != 0)
    {
        a = oktalni % 10;
        decimalni = decimalni + (a * pow(8, i));
        i++;
        oktalni = oktalni / 10;
    }
    printf("\nDecimalna vrijednost = %d", decimalni);
    _getch();
    return 0;
}