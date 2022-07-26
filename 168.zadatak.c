/*Napravite strukturu pitanje i strukturu odgovor. U main dijelu programa napravite datoteku "baza_pitanja.dat" kojoj je omoguceno samo citanje
Omogucite korisniku da igra kviz. Ako odgovori tocno upisite broj koji oznacava da je odgovor tocan, ako odgovori netocno
upisite broj koji oznacava netocan odgovor. Prikazite i spremite rezultate kao datoteku.*/

#include <stdio.h> 

struct odgovor {
    char tekst[100];
    int tocan;
};

struct pitanje {
    char tekst[100];
    int rb;
    struct odgovor odgovori[4];
};

int main(void)
{
    int i, j, tocan, odg, rezultat = 0;
    char ime[30];
    struct pitanje kviz[10];

    FILE* f = fopen("baza_pitanja.dat", "r");
    fread(kviz, sizeof(struct pitanje), 10, f);
    fclose(f);

   
    printf("Vase ime: ");
    gets(ime); 

    for (i = 0; i < 10; i++) {
        printf("Pitanje %d:\n", i + 1);
        puts(kviz[i].tekst); 
        for (j = 0; j < 4; j++) {
            if (kviz[i].odgovori[j].tocan == 1) {
                tocan = j + 1;
            }
            printf("%d. %s \n", j + 1, kviz[i].odgovori[j].tekst);
        }
        printf("Upisi broj ispred tocnog odgovora: ");
        scanf("%d", &odg);
        if (tocan == odg) {
            rezultat++;
            printf("TOCNO!!! \n\n");
        }
        else {
            printf("NETOCNO :( \n\n");
        }
    }

    f = fopen("rezultati.txt", "a");
    fprintf(f, "%s - %d", ime, rezultat);
    fclose(f);

    return 0;
}