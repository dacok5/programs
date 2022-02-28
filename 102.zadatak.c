/*U matricu *M unesite elemente uz danu funkciju unos_elemenata,
matrica je dvodimenzionalna. Ispisite Matricu *M u funkciji ispis_matrice. Takoder dinamicki zauzmite matricu te u mainu pozovite
funckiju unosa i ispisa*/
#include <stdio.h>
#include <stdlib.h>

void unos_elemenata(float** M, int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("Unesi M[%d][%d]: ", i, j);
			scanf("%f", &M[i][j]);
		}
	}
}

void ispis_matrice(float** M, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%.2f\t", M[i][j]);
		}
		printf("\n");
	}
}
int main() {

	int i, j, n, br;
	float** M;
	printf("Unesi red matrice: (n<=5) ");
	scanf("%d", &n);
	M = (float**)malloc(n * sizeof(float*));
	for (i = 0; i < n; i++) {
		*(M + i) = (float*)malloc(n * sizeof(float));
	}
	unos_elemenata(M, n);
	ispis_matrice(M, n);
	
	return 0;
}