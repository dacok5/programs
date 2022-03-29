/*Napisi strukturu auto koja sadrzi marku auta, potrosnju goriva, predene kilometre te potrosnju goriva.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct aut {
	char marka[20];
	float pp;
	float kg;
}auto;

void vozi(float km, auto* a) {
	float pg;
	float ppkm = a->pp / 100;
	pg = km * ppkm;
	if (pg > a->kg)
		return;
	a->kg -= pg;
}
int main() {
	int n; float r;
	scanf("%d", &n);
	auto* a = (auto*)malloc(sizeof(auto) * n);
	for (i = 0; i < n; i++) {
		scanf("%s", &auto[i].marka);
		scanf("%d", &auto [i].pp);
		scanf("%d", &auto [i].kg);
	}
	for (i = 0; i < n; i++) {
		vozi(r, &auto [i]);
	}
	for (i = 0; i < n; i++) {
		printf("%s", auto [i].marka);
		printf("%d", auto [i].pp);
		printf("%d", auto [i].kg);
	}
	return 0;
}