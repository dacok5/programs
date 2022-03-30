/*Napisati funkciju koja dinamicki alocira memoriju za n elemenata tipa int.
Novonastalo polje popuniti pseudoslucajnim broejvima izmedu A i B.
U main-u ispisati samo parne elemente tog polja. U potpunosti rukovati memorijom.*/

#include<stdio.h>
#include<stdlib.h>
#define GG A
#define DG B

int* funk(int n) {
	int* p;
	int i;
	p = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		p[i] = B + (float)rand() / RAND_MAX * (A - B);
	}
	return p;
}

int main() {
	int* p;
	int n;
	int i;
	scanf("%d", &n);
	sradn((unsigned)time(NULL));
	p = funk(n);
	for (i = 0; i < n; i++) {
		if (p[i] % 2 == 0)
			printf("%d", p[i]);
	}
	free(p);
	return 0;
}