#include<stdio.h>
#include<stdlib.h>
 /*Napisi strukturu matrice, struktura sadrzi m i n broj redaka i stupaca i polje pokazivaca na float pod imenom podaci.*/

typedef struct matrica {
	int m;
	int n;
	float** p;
}matrica;

float** alokacija2D(int r, int c) {
	matrica* M = (matrica*)malloc(sizeof(matrica));
	M->m = r;
	M->n = c;
	M->p = (float**)malloc(sizeof(float*) * r);
	int i;
	for (i = 0; i < r; i++) {
		M->p[i] = (float*)malloc(sizeof(float) * c);
	}
}