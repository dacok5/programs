/* Deklarirati strukturu racunalo u koju će se spremiti ovakvi ulazni podaci:
oznaka_procesora, takt_procesora, velicina_diska, ram, oznaka_grafike. Ulaz u program je prvo broj racunala
 koji će se ucitati, a nakon toga redom podaci o njima.* 
 Napisati funkciju swap koja ce primiti pokazivace na 2 clana polja struktura racunala te im zamijeniti mjesta.
 Napisati funkciju sort koja ce primiti pokazivac na ucitano polje struktura i broj elemenata tog polja.
 Funkcija treba sortirati clanove tog polja po taktu_procesora u rastucem redoslijedu.
 Koristiti algoritam sortiranja izborom najmanjeg elementa, a za zamjenu clanova polja koristiti prethodno napisanu funkciju swap.
 */
#include <stdio.h>

struct racunalo {
    char oznaka_procesora[10];
    float takt_procesora;
    int velicina_diska;
    int broj_rama;
    char oznaka_grafike[10];
}racunala[20];

void swap(struct racunalo* a, struct racunalo* b) {
    struct racunalo aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
void sort(struct racunalo* polje, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (polje[j].takt_procesora < polje[i].takt_procesora) {
                swap(&polje[i], &polje[j]);
            }
        }
    }
}

