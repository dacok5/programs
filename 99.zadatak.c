/*Napisati strukturu auto koji ima marku i prosjecnu potrosnju i kolicinu goriva. Napisati funkciju "vozi" koja prima broj
kilometara koje auto treba odvoziti i prima auto. U mainu dinamicki alocirati memoriju za n auta. Korisnik unosi cijeli broj n.
Provozati sve aute (to znaci pozvati funkciju "vozi" za svaki auto u polju auta). Broj koji cete predati funkciji vozi je pseudoslucajni
broj izmedu 30 i 200. Korisnik unosi sve podatke za auto. Na kraju ispisati podatke za svaki auto.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct auto{
	char marka[20];
	float pr_potrosnja;
	float kol_goriva;
}auto;

void vozi(int br, auto a1) {
	br = 20 + (float)rand() / RAND_MAX * (200 - 30);
}

int main() {
	int n;
	int i;
	scanf("%d", &n);
	int* n = (int*)malloc(sizeof(int) * n);
	auto a1[n];
	for (i = 0; i < n; i++) {
		vozi(a1[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%s", &a1.marka);
		scanf("%f", &a1.pr_potrosnja);
		scanf("%f", &a1.kol_goriva);
	}
	for (i = 0; i < n; i++) {
		printf("%s", a1.marka);
		printf("%f", a1.pr_potrosnja);
		printf("%f", a1.kol_goriva);
		return 0;
	}
}