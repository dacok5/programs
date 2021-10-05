#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Omoguci korisniku unos 10 brojeva te zbroji samo one koji su troznamenkasti */
int main()
{
    int i; 
    int broj;
    int troznamenkasti = 0;

    for (i = 1; i <=10; i++)
    {
        printf("Upisite broj: ", i);
        scanf_s("%d", &broj);
        if (broj >= 100 && broj <= 999)
            troznamenkasti += broj;
    }
    printf("Zbroj troznamenkastih brojeva je %d", troznamenkasti);

    return 0;
}
/*Omogucili smo korisniku da unese 10 brojeva. Za svaki unos korisnik bira kakav ce broj upisati. If petljom
smo se ogradili da nam nas program samo racuna troznamenkaste brojeve. Znaci ako korisnik unese troznamenkasti
broj spremi ga u varijablu troznamenkasti te ga zbroji s varijablom broj. U nasem slucaju mogu biti svih
10 brojeva troznamenkasti te bi se onda svih 10 puta oni spremali u varijablu troznamenkasti i zbrajali s brojem
no moguce je da ne postoji nijedan unesen troznamnekasti broj te naravno moguca kombinacija.*/