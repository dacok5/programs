/* Napravite strukturu pitanje i strukturu odgovor.U main dijelu programa napravite datoteku "baza_pitanja.dat" kojoj je omoguceno samo citanje
Omogucite korisniku da igra kviz.Ako odgovori tocno upisite broj koji oznacava da je odgovor tocan, ako odgovori netocno
upisite broj koji oznacava netocan odgovor.Prikazite i spremite rezultate kao datoteku.
Ovdje je primjer kako bi izgledao kod koji trazi zapisivanje u identicnu strukturu.*/

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
    int i, j;
    struct pitanje kviz[10];

    for (i = 0; i < 10; i++) {
        printf("Pitanje %d:\n", i + 1);
        gets(kviz[i].tekst);
        for (j = 0; j < 4; j++) {
            printf("Odgovor: ");
            gets(kviz[i].odgovori[j].tekst);
            printf("Tocan? ");
            scanf("%d", &kviz[i].odgovori[j].tocan);
            getchar();
        }
    }

    FILE* f = fopen("baza_pitanja.dat", "w");
    fwrite(kviz, sizeof(struct pitanje), 10, f);
    fclose(f);

    return 0;
}
