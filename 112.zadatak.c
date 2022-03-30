/*Napisati funkciju koja prima cijeli broj n, alociraj polje
od n float-ova te cijelo polje postavi na vrijednost 1. Funkcija vraca pokazivac
na to polje. U main-u to polje popuniti brojevima od 1 do n.*/

#include<stdio.h>
#include<stdlib.h>

float* dinalok(int n) {
	float* p;
	p = (float*)malloc(sizeof(float) * n);
	int i;
	for (i = 0; i < n; i++) {
		p[i] = 1;
	}
	return p;
}

int main() {
	float* p;
	int i, n;
	scanf("%d", &n);
	p = dinalok(n);
	for (i = 0; i < n; i++) {
		p[i] = i + 1;
		free(p);
	}
	return 0;
}
/*U prvom djelu smo napravili polje p te smo ga dinamicki alocirali. Proslakom kroz polje for petljom
mi smo uvjetom p[i]=1 postavili cijelo polje da nam je na vrijednosti 1.
U mainu smo pozvali to polje te smo uvjetom p[i]=i+1; dali uvjet da se povecava redoslijed brojeva s kojim
popunjavamo polje (od 1 do n).*/