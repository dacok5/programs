#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*Ispravi greske u kodu.*/
void seekwithinError(double sequence[], int n, double sum) { // funkcija mora biti tipa int, a ne void
	double i; //int i; (ne mozemo koristiti double jer vrtimo i u for petlji)
	const double err = 0.1;
	for (i = 0; i <= n; i++) //strogo manje od n mora ici <n
		if (num >= sequence[i] - err && num <= sequence[i] + err)
			return 1;
	return 0;
}
int main(void) {
	double a[] = { 1.1,2.34,5,9.1,1.23,3.01,7.1 };
	int f = seekwithinError(a[], 7, 3); //ide samo a bez []
	if (f)
		printf('Found'); //"Found"
	else
		printf("Not found");
	return 0;
}
/*Greske ispravljene u komentaru uz zadataka. Kod je koristen iz starih ispita iz kolegija programiranje 1.*/