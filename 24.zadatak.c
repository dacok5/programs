#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Napravite program u kojem korisnik unosi 10 brojeva iz intervala [-10,10]. Sve negativne brojeve koje korisnik unese
prebacite u pozitivne te ih sve ispisite na ekran (ukljucujuci i pozitivne pri unosu).*/
int main(){
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
		printf("\n %d \n", a[i]);
	}
	

	return 0;
}
/*For petljom omogucavamo 10 puta unos brojeva. Kako opet imamo neki zadani interval ogradujemo se do while petljom. Novom for petljom
prolazimo kroz unesene brojeve te sve koji su manji od 0 tj. za sve negativne, njih pretvorimo u pozitivne. Znaci nas -1 ce postat 1.
Printf funkcijom ispisujemo sve brojeve (ne samo one koji su pri unosu bili negativni nego i one koji su bili pri unosu pozitivni).*/