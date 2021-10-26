#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*Deklarirati i inicijalizirati polje znakova koje je string. Potom ga ispisati 10 puta na ekran*/

int main() {
	char s[] = "Volim cokoladu?\n";
	int i;
	for (i = 1; i <= 10; i++)
		printf("%s", s);
	return 0;
}

/*Imamo string s recenicom u sebi "Volim cokoladu?". For petlja nam sluzi da prodemo kroz string te da ispisemo 10 puta
Volim cokoladu?.*/