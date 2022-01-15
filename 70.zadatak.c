#include<stdio.h>
#include<conio.h>
/*Pretvori sve oktalne u binarne.*/
int main()
{
    int oktalni, a = 0, b;
    printf("Unesite neki oktalni broj: ");
    scanf_s("%d", &oktalni);
    while (oktalni != 0)
    {
        b = oktalni % 10;
        a = (a * 10) + b;
        oktalni = oktalni / 10;
    }
    oktalni = a;
    printf("\nVrijednost binarnog = ");
    while (oktalni != 0)
    {
        b = oktalni % 10;
        switch (b)
        {
        case 0: printf("000");
            break;
        case 1: printf("001");
            break;
        case 2: printf("010");
            break;
        case 3: printf("011");
            break;
        case 4: printf("100");
            break;
        case 5: printf("101");
            break;
        case 6: printf("110");
            break;
        case 7: printf("111");
            break;
        default: printf(" Greska(%d) ", b);
            break;
        }
        oktalni = oktalni / 10;
    }
    _getch();
    return 0;
}
/*Ovaj jednostavan program nam prebacuje sve oktalne brojeve u binarne. Switch case funkcijom provjeravamo poklapanja
tj provjeravamo koje su nam vrijednsoti dobivenih brojeva. Prvom while petljom izbijamo znamenke kako bi ih spremili u varijablu
a.*/