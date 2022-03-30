#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 short int koliko_savrsenih(short int* p, int n) {
	short int suma = 0, brojac = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < p[i]; j++) {
			if (p[i] % j == 0) {
				
				suma += j;
			}
		}
		if (suma == p[i])
		 brojac++;
		suma = 0;
	}
	return brojac;
}

int main(void) {
	short int* polje = (short int*)calloc(5,sizeof(short int));
	for (int i = 0; i < 5; i++) {
		scanf("%i", &polje[i]);
	}
	printf("%d", koliko_savrsenih(polje, 5));
	return 0;
}
