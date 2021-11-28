#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Ispravi pogreske u danom kodu.*/
void SumofSquares(float a[], int n) { //float r[], jer je u mainu oznaceno s r polje; ide float SumofSquares (vraca nam nesto fja)
	int i;
	float sum;
	for (i = 1; i < n; i++) //for petlja ide od 0
		sum += a[i] * a[i];
	return sum;
}
int main(void) {
	float r[3] = { 1,2,3 }// fali nam ;
	float sumSqr;
	sumSqr = SumofSquares(r[], 8); // predajemo samo r, bez []
	printf("%f\n", sumSqr);
	return 0;
}
/*Ispravljene stvari se nalaze pored koda, kod sam uzeo iz prijasnjih ispita iz kolegija programiranje 1.*/