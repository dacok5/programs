/*Napisite uvjete za alokaciju.*/

#include<stdio.h>
int main() {
	int n;
	int* broj = (int*)malloc(sizoef(int) * n);
	if (broj == NULL) {
		printf("Greska");
		exit(EXIT_FAILURE);
	}
}

/*Ovo je jednostavan kod u kojem radimo alokaciju uz provjeru iste.*/