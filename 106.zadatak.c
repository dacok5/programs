#include<stdio.h>
#include<stdlib.h>

/*Dinamicki alociraj memoriju za funkciju "ime".*/

int main() {
	char ime[31];
	fgets(ime, 31, stdin);
	int n;
	scanf("%d", &n);
	char* ime = (char*)malloc(sizeof(char) * (n + 1));
}

void alokacija(int* p) {
	int n;
	scanf("%d", &n);
	p = (int*)malloc(sizeof(int) * n);
}

/*U ovom zadatku koristimo fgets jer njime mozemo pokupiti razmak izmedu rijeci, a scanf-om ne bi mogli pokupiti razmak.
U funkciji char* ime moramo na kraju imati pointer i (n+1) jer kod funkcije char ide +1 zbog \0.*/