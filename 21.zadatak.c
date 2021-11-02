#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*Omogu ́citi korisniku unos cijelog brojaniz intervala [10,100].  
Potom, za svaki broj od 1 do n, u posebnom retku, ispisati na ekran isto toliko zvjezdica (*).*/

int main() {
	int a = 0;
	int i;
	int j;
	do {
		printf("Unesi broj iz intervala [10,100]: ");
		scanf_s("%d", &a);
	} while(!(a>=10&&a<=100));

	for ( i = 1; i <= a; i++) {
		for  (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/*U ovom programu smo napravili unos iz zadanog intervala. Ogranicili smo se na interval pa mso morali koristiti
do while petlju. Morali smo unesti neki broj intervala te sve do tog broja u svakom redu inkrementirati broj * kako nam je zadano u zadatku
*/