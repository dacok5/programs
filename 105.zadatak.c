#include<stdio.h>
#include<stdlib.h>

/*Funkcija koja prima trokut i racuna opseg trokuta.*/

float opseg(trokut tr) {
	float a, b, c;
	a = len2D(tr.T1, tr.T3);
	b = len2D(tr.T3, tr.T2);
	c = len2D(tr.T2, tr.T1);

	return a + b + c;
}
int main() {
	int trokut tr;
	tr.T1.x = 1;
	tr.T1.y = 1;
	tr.T2.x = 2;
	tr.T2.y = 2;
	tr.T3.x = 3;
	tr.T3.y = 3;
	printf("%f", opseg(tr));

}
