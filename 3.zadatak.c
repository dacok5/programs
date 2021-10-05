#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*Omoguci korisniku unos cijelog broja te provjeri je li broj paran ili neparan.*/
int main() {
	int a;
	printf("Unesite broj");
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("%d je paran broj", a);
	}
	else {
		printf("%d je neparan broj", a);
	}
	return 0;

}
/* U ovom zadatku omogucujemo korisniku da unosi neki proizvoljan cijeli broj. Koristio sam scanf_s jer mi je
Visual bacao errore za scanf() i predlozio koristenje scanf_s(). If petljom provjeravamo parnost, parnost se
provjerava na nacin da broj%2==0 (neki broj modulo 2 ==0). If else petljom dobivamo to da ako nije paran da 
isprinta da je neparan.*/