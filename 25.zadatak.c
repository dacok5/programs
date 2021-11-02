#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Omogucite korisniku unos 10 brojeva iz intervala [-10,10]. Sve brojeve postavite na negativnu vrijednost, a oni koji su uneseni kao negativni
ostavite ih kao negativne. Kasnije ispisite na ekran sve brojeve.*/
int main() {
	int a[10];
	int i;

	for (i = 0; i < 10; i++) {
		do {
			printf("Unesite %d broj: ", i + 1);
			scanf_s("%d", &a[i]);
		} while (!(a[i] > -10 && a[i] < 10));
	}
	for (i = 0; i < 10; i++) {
		if (a[i] < 0) {
			a[i] = -a[i];
		}
		printf("\n %d \n", -a[i]);
	}


	return 0;
}
/*Koristimo sve kao i u proslim zadacima samo sada moramo u printf isprintati -a[i] kako bi printali sve negativne brojeve. I dalje
koristimo do while jer imamo zadani interval od [-10,10] te for petljom prolazimo jer smo korisniku omogucili unos od 10 puta.*/