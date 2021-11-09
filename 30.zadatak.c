#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Omogucite korisniku da unese broj dana, a program ce vam ispisati koliko godina,tjedana i dana sadrzi vas broj dana. Primjer: pri unosu
10 dana ispis bi trebao izgledati: Godina 0, Tjedana 1, Dana 3.*/

int main()
{
    int dan, godina, tjedan;

    printf("Unesite broj dana: ");   
    scanf_s("%d", &dan);

    godina = (dan / 365);
    tjedan = (dan % 365) / 7;
    dan = dan - ((godina * 365) + (tjedan * 7));

    printf("Godina: %d\n", godina);
    printf("Tjedan: %d\n", tjedan);
    printf("Dan: %d", dan);

    return 0;
}
/*Korisniku omogucujemo da unese broj dana za koji zeli ispis. Godina,tjedan i dan su nam neke pomocne varijable u koje upisujemo
jednostavne formule kako bi dobili valjan ispis za nas unos. Na kraju ispisujemo vrijednosti na ekran.*/