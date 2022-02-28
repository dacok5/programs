
/*Treba dozvoliti unos cijelog broja iz niza intervala  [111,1234]. Zatim za svaki broj od 1 do n,
u posebnom retku, Ispiši na ekran toliko minusa (-).*/
#include<stdio.h>
int main()
{
	int a;
	int c;
	int y = 0;
	int i;
	int j;
	do
	{
		printf("Unesi broj iz intervala [111,1234]: ");
		scanf_s("%d", &a);
	} while (!(c >= 111 && c <= 1234));

	for (i = 1; i <= y; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("-");
		}
		printf("\n");
	}
	return 0;
}
/*
U ovom programu omogucujemo unos brojeva iz zadanog intervala. Zbog ogranicenja intervala, koristimo do while petlju.
Unosimo neki broj iz tog intervala sve do onog broja u svakom redu pomocu kojeg  iskomentiramo broj - kako nam je zadano.
*/

