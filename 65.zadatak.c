#include<stdio.h>
/*Pomocu funckije nadite najveci broj od dana 3 broja.*/

float najveci(float a, float b, float c)
{
	if (a >= b && a >= c) 
		return a;
	else if (b >= a && b >= c) 
		return b;
	else 
		return c;
}

int main()
{
	float br1, br2, br3, najveci_br;

	printf("Unesite neka 3 broja: ");
	scanf_s("%f %f %f", &br1, &br2, &br3);

	najveci_br = najveci (br1, br2, br3);
	printf("Najveci broj od dana 3 je = %f", najveci);
	return 0;
}
/*Napravili smo funckiju kojom gledamo koji je najveci broj od dana 3 broja. U main funkciji dajemo korisniku da unese tri broja
te pozivanjem funkcije usporedujemo ta 3 broja.*/