/*Funkcija koja racuna i ispisuje zbroj opsega dva kvadrata. Prethodno definirati strukturu kvadrata (stranica).*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct kvadrata {
	float a;
}kvadrat;

float zbr_opsega(kvadrat k1, kvadrat k2) {
	float O1, O2;
	O1 = 4 * (k1.a);
	O2 = 4 * (k2.a);
	return O1 + O2;
}
int main() {
	kvadrat k1, k2;
	k1.a = 10, 5;
	k2.a = 20, 4;
	return 0;
}