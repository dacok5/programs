/*Napisite program koji ce odrediti duljinu stringa pomocu pointerske notacije.*/
#include <stdio.h>
int calculateLength(char*);

void main()
{
	char str1[25];
	int l;
	printf("\n\n Izracunajte duljinu stringa :\n");

	printf(" Unesite proizvoljan string : ");
	fgets(str1, sizeof str1, stdin);

	l = calculateLength(str1);
	printf(" Duljina danog stringa %s je : %d ", str1, l - 1);
	printf("\n\n");

}

int calculateLength(char* ch) 
{
	int ctr = 0;
	while (*ch != '\0')
	{
		ctr++;
		ch++;
	}
	return ctr;
}