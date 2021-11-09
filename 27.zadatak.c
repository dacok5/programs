#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 10

/*U polju velicine 10 odredite sve indekse koji su dijeljivi s 5 te ih ispisite.*/
int main()
{
	int a[MAX], i;

	for (i = 0; i < MAX; i++)
	{
		scanf_s(" %d", &a[i]);
	}

	for (i = 0; i < MAX - 1; i++)
	{
		if (a[i] % 5 == 0)
		{
			printf("Indeks %d je dijeljiv s 5. \n", i);
		}
	}
	return 0;
}
/*Radimo polje od 10 znakova no u ovom slucaju da se malo razlikuje od ostalih programa velicinu definiram u zaglavlju. Mogao sam napisati
i (int a[10], isto bi bilo). Prvom for petljom omogucujemo unos dok drugom petljom provjeravamo je li nam broj tj. indeks dijeljiv s 5.*/