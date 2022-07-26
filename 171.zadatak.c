/* Napisati funkciju bubble() koja ce kao parametre primiti pokazivac na polje znakova. Funkcija treba
uzlazno sortirati predano polje po vrijednostima ASCII znakova koristeci algoritam zamjene
susjednih elementa. Funkcija ne vraca nikakvu vrijednost.
Napisati funkciju pretrazi() koja ce kao parametre primiti pokazivac na polje znakova te jedan znak
koji treba traziti u tom polju. Funkcija treba sekvencijalno pretraziti predano polje te ako pronade
trazeni znak vratiti 1, u suprotnom funkcija vraca -1.
U glavnom dijelu programa zatraziti od korisnika unos jedne recenice. Nakon toga zatraziti unos 5
slova koja ce se traziti u tom polju. Nakon toga polje sortirati koristeci napisanu funkciju te pretraziti
polje za svako od 5 trazenih slova. Svaki put ispisati na ekran je li slovo pronadeno ili nije. */

#include<stdio.h>
void swap(char* a, char* b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(char* polje) {
    int sort = 1, i;
    while (sort) {
        sort = 0;
        for (i = 0; polje[i + 1] != '\0'; i++) {

            if (polje[i + 1] < polje[i]) {
                swap(&polje[i + 1], &polje[i]);
                sort = 1;
            }
        }
        puts(polje);
    }
}

int pretrazi(char* polje, char znak) {
    int i;
    for (i = 0; polje[i] != '\0'; i++) {
        if (polje[i] == znak)
            return 1;
    }
    return -1;
}

int main(void) {
    char rec[50], slova[5];
    int i, rezultat;
    puts("Unesi recenicu:");
    gets(rec);

    bubble(rec);
    puts("Unesi slova za pretragu");
    for (i = 0; i < 5; i++) {
        scanf("%c", &slova[i]);
    }
    for (i = 0; i < 5; i++) {
        rezultat = pretrazi(rec, slova[i]);
        if (rezultat == 1)
            printf("Slovo %c nalazi se u ulaznom polju\n", slova[i]);
        else
            printf("Slovo %c ne nalazi se u ulaznom polju\n", slova[i]);
    }
    return 0;
}