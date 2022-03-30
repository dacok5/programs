/*Napsiati strukturu auto koja ima 3 karakteristike: marka, model i cijena.
U mainu za 2 auta dodijeliti vrijednost (novcanu) te ih zbrojiti i ispisati zbroj.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct auto{
	char marka[20];
	char model[20];
	int cijena;
}auto;


int main() {
	auto a, b;
	a.marka:"ford";
	a.model:"mondeo";
	a.cijena:"150000";
	b.marka:"bugati";
	b.model:"veyron";
	b.cijena:"100000000000";
	printf("%d", a.cijena + b.cijena);
	return 0;
}