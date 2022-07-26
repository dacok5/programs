/* Deklarirati strukturu automobil u koju ce se spremiti ovakvi ulazni podaci:
 * marka, model, godiste, broj_konja, cijena. Ulaz u program je prvo broj automobila
 * koji ce se ucitati, a nakon toga redom podaci o njima.

 * Napisati funkciju input() koja ce omoguciti korisniku unos podataka za zeljeni
 * broj automobila u polje struktura. Funkcija prima pokazivac na polje
 * automobila te broj automobila koji se zeli unijeti.

 * Napisati funkciju swap() koja ce primiti pokazivac na polje struktura te
 * 2 cijela broja koji ce predstavljati indekse clanova polja. Funkcija treba
 * u prednom polju zamijeniti podatke o automobilima s predanim indeksima.

 * Napisati funkciju search() koja ce primiti pokazivac na ucitano polje struktura
 * broj elemenata tog polja te jedan znak ('S' ili 'C'). Funkcija treba sekvencijalno
 * pretraziti polje automobila te pronaci, ovisno o predanom znaku, automobil s
 * najvecim brojem konja ('S') ili automobil s najvecom cijenom ('C') te vratiti
 * indeks trazenog automobila.

 * Napisati funkciju output() koja ce ispisati sve clanove polja automobila na ekran u obliku:
 * marka model snaga cijena. Svaki zapis mora biti u novom redu. Cijenu zaokruziti na 2 decimale.

 * U glavnom dijelu programa ucitati podatke za n automobila (korisnik unosi n, max 20),
 * pronaci indeks najskupljeg automobila i indeks najjaceg automobila te im zamijeniti mjesta.

 */
#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct automobil {
    char marka[20];
    char model[20];
    int godiste;
    int broj_konja;
    float cijena;
}Automobil;

void input(Automobil*, int);
void swap(Automobil*, int, int);
int search(Automobil*, int, char);
void output(Automobil*, int);

int main(void) {
    Automobil automobili[20];
    int n, m;
    int najskuplji, najjaci;
    do {
        printf("Unesite broj automobila\n");
        scanf("%d", &n);
    } while (n > 20);

    input(automobili, n);
    output(automobili, n);

    najskuplji = search(automobili, n, 'C');
    najjaci = search(automobili, n, 'S');
    swap(automobili, najskuplji, najjaci);

    printf("REZULTATI\n:");
    output(automobili, n);

}

void input(Automobil* a, int n) {

    int i;
    for (i = 0; i < n; i++) {
        // printf("Marka:\n");
        scanf("%s", a[i].marka);
        // printf("Model:\n");
        scanf("%s", a[i].model);
        //printf("Godiste:\n");
        scanf("%d", &a[i].godiste);
        //printf("Broj konja:\n");
        scanf("%d", &a[i].broj_konja);
        //printf("Cijena:\n");
        scanf("%f", &a[i].cijena);

    }

}
void swap(Automobil* a, int n, int m) {
    Automobil temp;
    temp = a[n];
    a[n] = a[m];
    a[m] = temp;
}
int search(Automobil* a, int n, char s) {
    int i, maxi = 0, maxs = a[0].broj_konja;
    float maxc = a[0].cijena;
    if (s == 'C') {
        for (i = 1; i < n; i++) {
            if (a[i].cijena > maxc) {
                maxc = a[i].cijena;
                maxi = i;
            }
        }
    }
    if (s == 'S') {
        for (i = 1; i < n; i++) {
            if (a[i].broj_konja > maxs) {
                maxs = a[i].broj_konja;
                maxi = i;
            }
        }
    }

    return maxi;
}

void output(Automobil* a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s ", a[i].marka);
        printf("%s ", a[i].model);
        printf("%d ", a[i].broj_konja);
        printf("%.2f\n", a[i].cijena);
    }
}