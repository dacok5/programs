#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*Omoguciiti korisniku unos dva cijela broja. 
Osigurati da drugi bude veci u odnosu na prvi. Ispisati na ekran sve cijele brojeve izmedu njih.*/

int main() {
	int a = 0;
	int b = 0;
	int i;
	do {
		printf("Unesi dva cijela broja tako da drugi bude veci od prvog: ");
		scanf_s("%d %d", &a, &b);
		printf("\n");
	} while (!(a > b));

	for (i = a + 1; i < b; i++) {
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}

/*U ovom programu smo morali unesti dva broja te da nam drugi broj bude veci od prvog. Postavili smo nase "brojeve" a i b na vrijednost
nula kako bi znali da nemaju vrijednost. Scanf funkcijom unosimo brojeve no opet koristimo do while petlju kako bi se ogradili da unosimo
prvo manji broj pa kasnije veci. for petljom prolazimo kroz unesene vrijednosti te ispisujemo na ekran te ako je korisnik dobro unio
opet mu dopustamo unos,a ako nije onda nas izbacuje iz programa i nas program "puca".*/