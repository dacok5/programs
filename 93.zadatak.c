/*Napravite program koji racuna volumen piramide*/

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14


float volumen(int a, int h) {

	
	double B = a * a;
	float V = (1.0 / 3.0) * h * B;
	return V;
}

int main() {
	int a, h;
	printf("Unesi duljinu strane piramide:\n");
	scanf("%d", &a);
	printf("Unesi visinu piramide:\n");
	scanf("%d", &h);
	float V = volumen(a, h);
	printf("Volumen piramide je %f\n", V);
	return 0;
}