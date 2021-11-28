#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Ispravi pogreske u kodu.*/
float fill(float p*, int n, float t) { //varijacije float polje[] ili float *p
	int i;
	for (i = 1; i < n; i++) //mora ici od nule i=0
		(p + i) = t * i; //mora ici pointer *(p+i)=t*i;
}
int main(void) {
	float a[50];
	int i;
	fill(*a, 50, 0.82f); //ne mora ici *a jer smo inicijalizirali vec polje
	for (i = 0; i < 50; i++) {
		printf("%f\n", a[i]);

	}
	return 0;
}
/*Ispravljene pogreske pored koda. Kod uzet kao primjer iz starih ispita iz kolegija programiranje 1.*/
