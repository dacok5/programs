/*Napravite program koji ce izracunat oplosje kocke*/

#include<stdio.h>
#include <stdlib.h>


float oplosje(int duljina) {

	float oplosje;
	oplosje = 6 * duljina * duljina;
	return oplosje;
}

int main() {
	int duljina;
	printf("Unesi duljinu stranice :\n");
	scanf("%d", &duljina);
	float O = oplosje(duljina);
	printf("Oplosje kocke je %f\n", O);
	return 0;
}