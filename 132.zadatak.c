/*Napravite program koji ispisuje elemente polja pomocu pointera*/

#include<stdio.h>
#include<stdlib.h>
#define size 20

int main()
{
	int a[3] = { 11, 22, 33 };

	printf("\n a[0] ,vrijednost=%d : adresa=%u", a[0], &a[0]);
	printf("\n a[1] ,vrijednost=%d : adresa=%u", a[1], &a[1]);
	printf("\n a[2] ,vrijednost=%d : adresa=%u", a[2], &a[2]);

	return (0);
}