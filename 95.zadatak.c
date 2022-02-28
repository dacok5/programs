/*Napisi funkciju koja prima cijeli broj n, alociraj memoriju za polje od n float-ova te cijelo polje postavi na vrijednost 1. 
Funkcija vraca pokazivac na to polje. U main-u to polje popuniti brojevima od 1 do n.*/

#include<stdio.h>
#include<stdlib.h>
float* din_alok(int n) {
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
	p = din_alok(n);
	for (i = 0; i < n; i++) {
		p[i] = i + 1;
	}
	free(p);
	return 0;
}