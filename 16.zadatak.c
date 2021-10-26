#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Deklarirati i inicijalizirati polje znakova. Napisite neku proizvoljnu recenicu te ispisite svaki drugi znak*/
int main() {
	char string[] = "Neka random recenica";
	int i;
	for (i = 0; string[i] != '\0'; i++)
		if ((i + 1) % 2 == 0)
			putchar(string[i]);
	return 0;
}
/*U ovom zadatku koristimo stringove. Stringovi se ponasaju slicno kao i polja no razlika je ta da u njima koristimo znakove
tj. slova za razliku od polja. Napravili smo string koji u sebi sadrzi recenicu ("Neka random recenica"). Prolazimo
kroz nase polje znakova. string[i] != '\0' ovo nam znaci da prolazimo kroz polje sve do pojave null znaka. Funkcijom
putchar ispisujemo nas string.*/