//  Korisnik treba unijet polje velicine 20 i odredi sve indekse koji su parni te ih ispisat.

#include<stdio.h>
#define max 20

int main()
{
	int p[max], i;

	for (i = 0; i < max; i++)
	{
		scanf(" %d", &p[i]);
	}

	for (i = 0; i < max; i++)
	{
		if (p[i] % 2 == 0)
		{
			printf("Indeks %d je paran . \n", i);
		}
	}
	return 0;
}

/*U ovom jednostavnom zadatku smo napravili polje od 20 znakova koje smo prethodno definirali u zaglavlju kao funkciju max=20.
*/