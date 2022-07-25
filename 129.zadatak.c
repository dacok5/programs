/* Program treba pronaci i ispisat sve proste brojeve izmedu granica*/

#include<stdio.h>

int main()
{
	long int i, prost, gornja, donja, n;

	printf("Unesi donju granicu : ");
	scanf("%d", &donja);
	printf("\n\nUnesi gornju granicu : ");
	scanf("%d", &gornja);
	printf("\n\nProsti brojevi su : ");

	for (n = donja + 1; n < gornja; n++)
	{
		prost = 1;
		for (i = 2; i < n; i++)
			if (n % i == 0)
			{
				prost = 0;
				break;
			}
		if (prost)
			printf("%d, ", n);
	}
	return 0;
}