/*Napisite C program koji ce ucitati string(minimalno 2 znaka, maksimalno 30 znakova).
Ponoviti unos ukoliko uneseni string ne zadovoljava uvjete.
Napisati funkciju duzina koja ce primiti pokazivac na nulti element ucitanog stringa, a vratit ce duzinu stringa.
Napisati funkciju num_max koja ce primiti pokazivac na nulti element ucitanog stringa.
Funkcija treba pronaci element u stringu s najvecom ASCII vrijednosti te vratiti broj koji predstavlja koliko u 
stringu ima znakova s 5 tom ASCII vrijednosti.U main funkciji koristenjem dvije gore navedene funkcije ispisati duzinu 
unesenog stringa, te koliko je znakova u stringu s maksimalnom ASCII vrijednosti.*/


#include <stdio.h>

int duzina(char* s) {
    int count = 0, i;
    for (i = 0; *(s + i) != '\0'; i++) {
        count++;
    }
    return count;
}

int num_max(char* s) {
    int max = 0, i, count = 0;
    for (i = 0; *(s + i) != '\0'; i++) {
        if (max < *(s + i))
            max = *(s + i);
    }
    for (i = 0; *(s + i) != '\0'; i++) {
        if (*(s + i) == max)
            count++;
    }
    return count;
}

int main(void)
{
    char s[100];
    int n;
    while (1) {
        gets(s);
        n = duzina(s);
        if (n < 2 || n>30)
            puts("Ponovi unos!");
        else
            break;
    }

    printf("Duzina %d\n", duzina(s));
    printf("Max count %d\n", num_max(s));


    return 0;
}
