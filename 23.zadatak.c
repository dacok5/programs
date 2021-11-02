#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Omogucite korisniku unos 10 brojeva. Neka brojevi budu u intervalu od [-10,10]. Kada je korisnik uneso sve brojeve
izracunajte sumu svih brojeva te na ekran ispiste srednju vrijednost te sumu unesenih brojeva.*/
int main() {
	int a[10];
	int i;
	int suma = 0;
	float arit = 0;
	for (i = 0; i < 10; i++) {
		do {
			printf("Unesite %d. cijeli broj: ", i + 1);
			scanf_s("%d", &a[i]);
		} while (!(a[i]> -10 && a[i] < 10));
	}
	for (i = 0; i < 10; i++) {
		suma += a[i];
	}
	printf("\n Suma unesenih brojeva je: %d \n", suma);
	arit = (suma * 1.0) / 10;
	printf("\n Srednja vrijednost polja je %f . \n", arit);
	return 0;
}
/* Kako nam je dozovljen unos od 10 puta mi radimo polje od 10 znakova tj. 10 brojeva. For petljom prolazimo kroz polje te
omogucavamo korisniku unos 10 puta. Opet se ograđujemo nekim zadanim intervalom pa koristimo do while petlju. Nakon unosa opet prolazimo
kroz polje kako bi izracunali nasu sumu unesenih brojeva. Kada racunamo aritmeticku sredinu (tj. u nasem slucaju arit nam predstavlja 
srednju vrijednost polja) moramo staviti (suma*1.0). 1.0 nam sluzi da sve cijele brojeve prebaci u realne tj. da sve intove prebaci
u floatove. Na kraju ispisujemo rjesenja.*/