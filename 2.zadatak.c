/*
Omoguciti korisniku unos osam realnih brojeva.
Osigurati da svaki unos bude unutar [- 5, 5]. Potom,
izracunati i na ekran ispisati srednju vrijednost unesenih brojeva.
*/
#define CRT_SECURE_NO_WARNINGS   		
#include<stdio.h>

int main() {
	float x;
	float zbroj = 0;
	int i;
	for (i = 0; i < 8; i++) {
		do {
			scanf("%f", &x);
		} while(!(x >= -5 && x <= 5));
		zbroj += x;
	}
	printf("%f", zbroj / 8);
	return 0;
}
/*U ovom programu računamo srednju vrijednost unesenih brojeva koji se nalaze unutar intervala [-5,5].
Čim nam je zadano da omogućimo korisniku unos realnih brojeva moramo koristiti float(). Kako omogućujemo korisniku
da unese 8 brojeva mi stvaramo polje. Kako korisnik unosi svaki dodatni broj, mi inkrementiramo tj.
"pomičemo" se po polju s for petljom kako je prikazano. Do while() petljom mi osiguravamo da nam unos bude unutar
zadanog intervala [-5,5]. Kako imamo 8 x unosa (osam iks unosa) to nam je jedina varijabla te njenu sumu možemo
izračunati na način zbroj+=x; (ili zbroj=zbroj+x;). U printfu() koristimo %f jer koristimo floatove te zbroj/8
jer nam je potrebna srednja vrijednost 8 unesenih brojeva. Mogli smo napraviti posebnu varijablu sred_vrijed te ju
zapisati kao sred_vrijed=zbroj/8; te u printfu printat sred_vrijed.*/
