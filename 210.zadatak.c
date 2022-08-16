/*Napisite program koji ce pointerski odrediti koji broj od dva unesena je veci*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int br1, br2, * ptr1 = &br1, * ptr2 = &br2;

	printf("\n\n Pointer : Pronadi koji broj je najveci od unesena dva :\n");

	printf(" Prvi broj : ");
	scanf("%d", ptr1);
	printf(" Drugi broj : ");
	scanf("%d", ptr2);


	if (*ptr1 > * ptr2)
	{
		printf("\n\n %d je najveci broj.\n\n", *ptr1);
	}
	else
	{
		printf("\n\n %d je najveci broj.\n\n", *ptr2);
	}

}
