/*Omoguci korisniku unijeti broj u obratnom redoslijedu, koristeci while petlju*/

#include<stdio.h>
int main()
{
    int broj, a, b = 0;
    printf("Unesi broj po zelji:");
    scanf("%d", &broj);

    while (broj >= 1)
    {
        a = broj % 10;
        b = a * 10 + b;
        broj = broj / 10;
    }

    printf("\nzeljeni broj je u obrnutom poretku %d", b);
    return 0;
}