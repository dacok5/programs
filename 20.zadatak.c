#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Omoguciti korisniku unos recenice/stringa/polja znakova te izracunati koliko je polje dugacko (broj znakova) te ispisati
na ekran.*/
int main()
{
    char string[30]; 
    int i;
    int brojac = 0;

    printf("Unesite polje znakova: ");
    gets(string);

   
    for (i = 0; string[i] != '\0'; i++)
    {
        brojac++;
    }

    printf("Duzina stringa je %d", brojac);

    return 0;
}

/*Prvo napravimo polje znakova te inicijaliziramo brojac jer ce nam on sluziti za brojanje znakova. S funkcijom gets unosimo nas string
te kroz for petlju idemo redom kroz polje znakova te pohranjujemo koliko znakova smo unjeli do NULL znaka te povecavamo brojac
svakim unosom novog znaka.  Printf funkcijom ispisujemo duljinu polja tj. ispisujemo koliko znakova se nalazi u polju.*/