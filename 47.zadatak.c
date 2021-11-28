#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
/*Ispravi pogreške u slijedecim primjerima!*/

void euclidDistance(float* a, float[]b, int n) { //float b[], float
	int i; float sum; //float sum=0;
	for (i = 0; i < n; i++)
		num += (a[i] - b[i]) * (a[i] - b[i]);
	distance = sqrt(num);
	return distance; 
}
int main(void) {
	float x[] = { 1,2,3,4,5 }; float y[] = { 6,7,8,9 };
	float d = euclidDistance(x, y); //(x,y,5);
	printf("EuclideDistance between x and y: %f\n", d);
	return 0;
}

/*Ispravljene stvari sam zakomentirao pored reda gdje se nalaze greske. Prva greska je ta da nam funkcija mora biti float jer unutar
sebe ima return. Polje oznacavamo na nacin int/float polje[];, sumu moramo postaviti na nula da bi mogli racunati te pri pozivanju fje
u mainu moramo u euclidDistance staviti i velicinu 5. Zadatak sam uzeo iz starih primjera ispita iz kolegija programiranje 1.*/