// Omoguci korisniku unos elemenata u  polja velicine 20 i odredi sve indekse koji su dijeljivi sa 3 te ih ispisat indekse i lemente u njima. 

#include<stdio.h>
#define max 20

int main()
{
	int M[max], i;

	printf("Unesi elemente u polje:\n");
	for (i = 0; i < max; i++)
	{
		scanf(" %d", &M[i]);
	}

	for (i = 0; i < max; i++)
	{
		if (M[i] % 3 == 0)
		{
			printf("Indeks %d je dijeljiv sa 3 i element je %d \n", i, M[i]);
		}
	}
	return 0;
}