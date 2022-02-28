/*Napisi strukturu auto koja ia 3 karatkeritike:marka,model,cijena. U mainu 2 auta, dodjeliti im vrijednost te ih zbrojiti. Ispisati
zbroj.*/
#include<stdio.h>
#include<stdlib.h>

typedef struct auto{
	char marka[20];
	char model[20];
	int cijena;
}auto;

int main() {
	auto a, b;
	a.marka = "Ford";
	a.model = "Mondeo";
	a.cijena = "150000";
	b.marka = "Peugeot";
	b.model = "307";
	b.cijena = "90000";
	printf("%d", a.cijena + b.cijena);
	return 0;
}