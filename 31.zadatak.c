#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*Omogucite korisniku da unese dva stringa. Napravite od ta dva stringa jedan te ispisite na ekran kako izgleda spojeni string.
Primjer: prvi string neka bude FERIT, a drugi neka bude OSIJEK, a rezultat koji treba biti ispisan mora biti FERITOSIJEK.*/
int main()
{
	char a[20], b[20];

	printf("Unesite prvi string:\n");
	gets(a); 

	printf("Unesite drugi string:\n");
	gets(b); 

	strcat(a, b);

	printf("Dobiveni string izgleda:%s\n", a);

	return 0;
}

/*Omogucavamo korisniku da unese dva stringa. Funkcijom strcat (koju sam pronasano na internetu) nam omogucava da se prvi string nadovezuje
na drugi te normalnim ispisom printamo string a jer se string b pohranjuje na kraj prvog stringa tj. kod null znaka prvog stringa.*/