#include <stdio.h>
/*Zamijeni dva broja koristenjem pointera.*/
void swap(int* x, int* y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int num1, num2;

    printf("Unesite vrijednost num1: ");
    scanf_s("%d", &num1);
    printf("Unesite vrijednost num2: ");
    scanf_s("%d", &num2);

    swap(&num1, &num2);

    printf("Zamijenjeni: num1 je: %d, num2 je: %d\n", num1, num2);

    return 0;
}
/*U ovom kodu moramo zamijeniti dva broja. Napravili smo funkciju swap (preuzeto sa sluzbenog salabahtera). U main
funkciji jednostavno moramo definirati dva broja. Nakon definiranja pozivamo swap funkciju.*/