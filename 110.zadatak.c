/*Napisi funkciju koja prima neko polje i svaki element pomnozi s 2.*/

#include<stdio.h>
#include<stdlib.h>

void funk(int* polje, int n) {
	int i;
	for (i = 0; i < n; i++) {
		polje[i] *= 2;
	}
}

int main() {
	int polje[3] = { 1,2,3 }, i, n;
	funk(polje, 3);
	for (i = 0; i < n; i++) {
		printf("%d", polje[i]);
	}
	return 0;
}