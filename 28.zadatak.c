#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Napravite program koji broji koliko slova imamo u recenici, koliko znamenki te koliko praznina. Rezultat ispisite na ekran.*/
int main()
{
    int c;
    int broj_slova = 0;
    int broj_znamenki = 0;
    int broj_praznina = 0;

    while ((c = getchar()) != '\n')
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
            broj_slova++;
        else if (c >= '0' && c <= '9')
            broj_znamenki++;
        else if (c == ' ')
            broj_praznina++;

    printf("\nSlova: %d  Znamenke: %d  Praznine: %d\n", broj_slova, broj_znamenki, broj_praznina);
    return 0;
}

/*Korisniku omogucavamo unos pomocu getchar funkcije. U if petlji omogucavamo da nam se broje sva velika i mala slova od A-Z.
U slijedecoj else if petlji omogucavamo da nam se gledaju samo znamenke (od 0 do 9) te isto tako za zadnju petlju gledamo koliko 
imamo praznina. Ispisujemo na ekran koliko cega dobijemo brojacanom vrijednoscu.*/