#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Ispravi pogreske u kodu.*/
float average(float[]polje, int n) { // float polje[]
	float i; //int i;, deklarirati sumu (float suma=0;)
	for (i = 0; i < n; i++)
		sum += (polje + i); //sum+=*(polje+i);
	return sum / n; 
}
int main() {
	float polje[] = { 5.0,7.0,6.0,4.0,1.0 };
	printf("Average: %.2f\n", average(*polje[5])); //polje[5]
	return 0;
}

/*Pogreske su ispravljene pored koda u komentaru. Zadatak uzet iz primjera starih ispita iz kolegija programiranje 1.*/