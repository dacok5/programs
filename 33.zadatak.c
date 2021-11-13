#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Isprintajte sve ASCII vrijednosti na ekran.*/
int main()
{
    int i;

    for (i = 0; i <= 255; i++)
    {
        printf("ASCII vrijednost od  %c = %d\n", i, i);
    }

    return 0;
}
/*U ovom zadatku printamo sve ASCII vrijednosti svih znakova iz ASCII tablice. Posto ih ima 255 u for petlji stavljamo da 255 puta
prolazi kroz imaginarno polje. %c i %d izjednacimo kako bi dobili iz numericke vrijednosti vrijednosti znaka i obrnuto.*/