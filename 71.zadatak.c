#include<stdio.h>
#include<conio.h>
/*Pretvorite sve decimalne brojeve u binarne.*/
int main()
{
    int decimalni, binarni[99], i = 0;
    printf("Unesite bilo koji decimalni broj: ");
    scanf_s("%d", &decimalni);
    while (decimalni != 0)
    {
        binarni[i] = decimalni % 2;
        i++;
        decimalni = decimalni / 2;
    }
    printf("\nVrijednost binarnog = ");
    for (i = (i - 1); i >= 0; i--)
        printf("%d", binarni[i]);
    _getch();
    return 0;
}