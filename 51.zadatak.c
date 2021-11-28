#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*Ispravi pogreske u kodu.*/
void isPrime(int num) {  //int isPrime(int num){
	for (i = 2; i < num; i++) //int i (moramo inicijalizirati prije for petlje)
		if (!(num % 2)) //%i umjesto %2
			return 0;
	return 1 //return 1;
}
int main(void) {
	int r;
	srand(2018);
	while (1) {
		r = 2 + rand();
		if (isPrime(r)) break;
	}
	printf("%f\n\n", r);  //printf("%d\n\n", r);, r je tipa int, a ne float
	return 0;
}
/*Ispravak stoji kao komentar uz kod. Kod je uzet kao primjer iz kolegija programiranje 1 (stari ispiti).*/