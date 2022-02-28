/*Nparavite strukturu koja prima pitanja i odgovore. Dopustite korisniku da unese pitanje te potom unesite moguci odgovor.
Provjerom napravite da ako je moguci odgovor tocan (1 bod), ako nije (0 bodova). Dopustite korisniku unos imena te mu dopustite da
ocijeni je li moguci odgovor tocan ili nije. Nacin na koji cete odrediti je li odgovor tocan ili nije je taj da za tocan odgovor
unesete redni broj pitanja/odgovora. Ispisite na koliko pitanja ste dali tocan odgovor*/
# include <stdio.h>
# include <string.h>

int main() {

	int i, j, o, bro = 0;
	char ime[30];

	struct odgovor {
		char odgi[50];
		int toc;
	};

	struct pitanje {
		int r_br;
		char tekst[100];
		struct odgovor odg[4];
	} igra[10];

	for (i = 0; i < 10; i++) {
		printf("Unesi %d. pitanje: ", i + 1);
		gets(igra[i].tekst);
		igra[i].r_br = i + 1;
		for (j = 0; j < 4; j++) {
			printf("Unesi %d. moguci odgovor: ", j + 1);
			gets(igra[i].odg[j].odgi);
			printf("Unesi je li %d. moguci odgovor tocan (0/1): ", j + 1);
			scanf("%d", &igra[i].odg[j].toc);
			getchar();
		}
	}

	printf("Unesite svoje ime: ");
	gets(ime);
	printf("%s, nakon ispisanog pitanja i ponudjenih odgovora, unesite broj ispred ponudjenog odgovora za koji smatrate da je tocan.\n\n", ime);

	for (i = 0; i < 10; i++) {
		printf("%d. %s\n", igra[i].r_br, igra[i].tekst);
		for (j = 0; j < 4; j++) {
			printf("\t%d. %s\n", j + 1, igra[i].odg[j].odgi);
		}
		printf("Unesite redni broj odgovora za koji smatrate da je tocan: ");
		scanf("%d", &o);
		if (igra[i].odg[o - 1].toc == 1) {
			printf("Tocno! :)\n\n");
			bro++;
		}
		else {
			printf("Netocno! :(\n\n");
		}
	}
	printf("%s, ukupno ste odgovorili tocno na %d od 10 pitanja, odnosno vasa uspjesnost je %d%%!", ime, bro, bro * 10);
	printf("\n\n");
}