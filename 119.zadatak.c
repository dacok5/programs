#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double returnGeosred(int br) {
	int velicina = 0;
	int tajBr = br, temp = 0;
	double reza = 0, potencija = 0;
	while (br) {
		br /= 10;
		velicina++;
	}
	for (int i = 0; i < velicina; i++) {
		temp = tajBr % 10;
		tajBr /= 10;
		reza += temp;
		
	}
	potencija = (1.0 / velicina);
	reza = pow(reza, potencija);
	return reza;
}


int main(void) {
	printf("%f\n", returnGeosred(54321));
	printf("%f\n", returnGeosred(-789));
	return 0;
}
