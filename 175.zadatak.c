/* Deklarirati strukturu racunalo u koju ce se spremiti ovakvi ulazni podaci:
 oznaka_procesora, takt_procesora, velicina_diska, ram, oznaka_grafike. Ulaz u program je prvo broj racunala
 koji ce se ucitati, a nakon toga redom podaci o njima.
 Napisati funkciju swap koja ce primiti pokazivace na 2 clana polja struktura racunala te im zamijeniti mjesta.
 Napisati funkciju sort koja ce primiti pokazivac na ucitano polje struktura i broj elemenata tog polja.
 Funkcija treba sortirati clanove tog polja po taktu_procesora u rastucem redoslijedu.
 Koristiti algoritam sortiranja izborom najmanjeg elementa, a za zamjenu clanova polja koristiti prethodno napisanu funkciju swap.
 Napisati funkciju search() koja ce primiti pokazivac na sortirano polje struktura, broj elemenata polja, cijeli broj koji predstavlja kolicinu rama
 te realni broj koji predstavlja takt procesora. Funkcija treba sekvencijalno pretraziti sortirano polje i vratiti indeks prvog racunala u polju
 koji ima 8 ili manje GB rama, a takt procesora veci od 3 GHz ili -1 ako nema takvog ra?unala.
 U glavnom dijelu programa ucitati podatke za n racunala, sortirati polje struktura te na kraju na ekran ispisati odgovarajucu poruku ovisno o tome je li nadeno
racunalo s trazenim parametrima ili nije.*/

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


int search(struct racunalo* polje, int elem, int ram, float takt) {
    int i, a = 0;

    for (i = 0; i < elem; i++) {
        if ((polje[i].broj_rama <= ram) && (polje[i].takt_procesora > takt)) {
            return i;
        }
    }
    return -1;
}
int main(void) {
    int i, k;
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%s", racunala[i].oznaka_procesora);
        scanf("%f", &racunala[i].takt_procesora);
        scanf("%d", &racunala[i].velicina_diska);
        scanf("%d", &racunala[i].broj_rama);
        scanf("%s", racunala[i].oznaka_grafike);
    }

    for (i = 0; i < k; i++) {
        printf("%s %.2f, %dGB, %dGB, %s\n", racunala[i].oznaka_procesora,
            racunala[i].takt_procesora,
            racunala[i].velicina_diska,
            racunala[i].broj_rama,
            racunala[i].oznaka_grafike);

    }

    sort(racunala, k);

    printf("REZULTATI:\n");
    if (search(racunala, k, 8, 3) > -1) {
        printf("Trazeno racunalo je nadjeno na %d indeksu polja.", search(racunala, k, 8, 3));
    }
    else if (search(racunala, k, 8, 3) == -1) {
        printf("Trazeno racunalo nije nadjeno.");
    }
    return 0;
}