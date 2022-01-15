#include<stdio.h>
#include<conio.h>
/*Prebacite sve decimalne brojeve u oktalne.*/
int main()
{
    int decimalni, oktalni[99], i = 0;
    printf("Unesite neki decimalni broj: ");
    scanf_s("%d", &decimalni);
    while (decimalni != 0)
    {
        oktalni[i] = decimalni % 8;
        i++;
        decimalni = decimalni / 8;
    }
    printf("\nVrijednost oktalnog broja iznosi = ");
    for (i = (i - 1); i >= 0; i--)
        printf("%d", oktalni[i]);
    _getch();
    return 0;
}