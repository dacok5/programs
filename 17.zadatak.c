#define CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*Napisati funkciju koja za odredenu recenicu vraca koliko je broj samoglasnika, ispisite broj samoglasnika.*/
int main() {
	char s[30];
	int i;
	int brojac = 0;
	gets(s);
	for (i = 0; s[i] != '0'; i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			brojac++;
	}
	printf("\nU nasoj recenici ima %d samoglasnika.\n", brojac);
	return 0;

}
/*U ovom programu smo napravili polje znakova velicine 30. Gets(s) nam sluzi za unos recenice. For petljom prolazimo kroz polje
znakova te u if petlji provjeravamo sve samoglasnike. U ovom zadatku sam stavio da se provjeravaju samoglasnici koji imaju
malo i veliko slovo u recenici. Brojacem spremamo broj samoglasnika u nasoj recenici.*/