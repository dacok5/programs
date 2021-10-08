#define CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
/*Omogucite korisniku unos brojeva u polje od 11 elemenata. Pronadite i ispisite najveci element koji je 
korisnik uneso u polje velicine 11 elemenata*/
int main() {
	int polje[11];
	int i;
	int max = 0;
	for (i = 0; i < 11; i++) {
		printf("Unesite broj %d:", i + 1);
		scanf_s("%d", &polje[i]);
	}
	for (i = 0; i < 11; i++) {
		max = polje[i];
	}
	printf("Maksimum polja je %d", max);
	return 0;
}
/*Korisniku smo dali da unese bilo kojih 11 brojeva u nase polje. Prvom for() petljom smo mu omogucili da 11 puta
unese zeljene brojeve dok smo drugom for() petljom prolazili kroz polje i gledali koji je najveci uneseni broj.
Prvi uneseni broj nas program sprema u max te opet prolazi kroz polje i trazi drugi najveci. Program funkcionira
na nacin da idemo od elementa do elementa u polju te ih spremamo u nas maximum. Najveci broj ce se spremit u nas max.
*/