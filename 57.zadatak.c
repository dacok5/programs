#include <stdio.h>
/*Napravite program koji uzima podatke korisnika (ime,visina,godine,adresa) te ih ispisite u novim linijama kao rjesenja.*/
int main()
{
	int godine;
	float visina;
	char ime[30], adresa[100];

	
	printf("Unesite ime: ");
	fgets(ime, 30, stdin);
	printf("Unesite adresu: ");
	fgets(adresa, 100, stdin);

	printf("Unesite godine: ");
	scanf("%d", &godine);
	printf("Unesite visinu: ");
	scanf("%f", &visina);

	
	printf("Ime: %s", ime);
	printf("Adresa: %s", adresa);
	printf("Godine: %d, Visina: %0.2f\n", godine, visina);

	return 0;
}
/*Unosimo parametre te ih krajnjim printf-om ispisujemo kao rjesenja.*/