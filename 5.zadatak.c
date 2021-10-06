#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
/*Izracunaj volumen kugle na nacin da korisnik unosi velicinu radijusa. Ispisi koja kugla je veca te koja je njena vrijednost*/
int main() {
	float r1;
	float r2;
	float V1 = 0;
	float V2 = 0;
	float pi = 3.1415;
	printf("Unesite radijus prve kugle:");
	scanf_s("%f", &r1);
	printf("Unesite radijus druge kugle:");
	scanf_s("%f", &r2);
	V1 = (4.0 / 3.0) * (r1 * r1 * r1) * pi;
	printf("\nVelicina prve kugle je %f", V1);
	V2 = (4.0 / 3.0) * (r2 * r2 * r2) * pi;
	printf("\nVelicina druge kugle je %f", V2);
	if (V1 > V2) {
		printf("\nPrva kugla je veca od druge");
	}if (V1 < V2) {
		printf("\nDruga kugla je veca od prve");
	}if (V1 == V2) {
		printf("\nKugle su jednake");
	}
	return 0;

}
/*U ovom programu omogucavamo korisniku da unese dva radijusa kako bi izracunali volumene. Varijabla V1 i V2 nam sluze kao varijable u kojima
se nalaze formule za racunanje volumena kugle. 4/3 sam napisao kao 4.0 i 3.0 jer se radi o float varijablama i ocekujemo da nam program racuna sa istim.
Kada bi pisali samo 4/3, bez .0 dobili bi krive rezultate tj. krive vrijednosti volumena kugle.
Kada izracunamo volumen prve kugle spremimo ga u varijablu V1 te isto tako i za drugu kuglu no njenu
vrijednost spremamo u varijablu V2. Kako bi ispisali koja je kugla veca ili jednaka koristimo tri naredbe if() u kojima postavljamo uvjete za kugle
(V1>V2, V1<V2, V1=V2). Na kraju programa ispisujemo koja kugla je veca ili su jednake.*/