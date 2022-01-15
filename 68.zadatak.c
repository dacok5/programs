/*Napravite program koji prebacuje kilograme u grame*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float kg, g;
    printf("Unesite tezinu u kilogramima: ");
    scanf_s("%f", &kg);
    g = kg * 1000;
    printf("Tezina u gramima = %0.2f", g);
    _getch();
    return 0;
}
/*U ovom jednostavnom programu racunamo koliko kilogram (unesen s tipkovnice) imaju grama. Zbog errora morao sam koristit
varijaciju scanf (scanf_s) te sam morao koristit umjesto getch() (_getch()).*/