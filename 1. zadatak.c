#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a;
	int b;
	int c;
	scanf("%d%d", &a, &b);
	if (a > b) {
		c = a;
	}
	else {
		c = b;
	}
	printf("%d", c);
	return 0;
}

/* u ovom vrlo jednostavnom kodu dajemo korisniku da unese dva broja te s if() petljom provjeravamo uvjete, u ovom
slučaju prvojeravamo je li a>b, ako je uvjet istinit tj. da je a veći od b, a spremamo u varijablu c, ako nije uvjet
istinit else() petljom spremamo vrijednost od b u novu varijablu c.* 
 
