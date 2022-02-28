/*Program treba izracunat sve parametre stozca.*/

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14
#include<math.h>


float volumen(int polumjer, int visina) {

	float volumen;
	volumen = (1.0 / 3.0) * PI * polumjer * polumjer * visina;
	return volumen;
}

float baza(int polumjer) {

	float baza;
	baza = PI * polumjer * polumjer;
	return baza;
}
float polumjer_plasta(int polumjer, int visina) {

	float s;
	s = sqrt(polumjer * polumjer + visina * visina);
	return s;
}
float povrsina_plasta(int polumjer, int visina) {

	float s;
	s = sqrt(polumjer * polumjer + visina * visina);
	float M = PI * s * polumjer;
	return M;
}
float oplosje(int polumjer, int visina) {

	float s;
	s = sqrt(polumjer * polumjer + visina * visina);
	float O = PI * polumjer * (polumjer + s);
	return O;
}

int main() {
	int polumjer, visina;
	printf("Unesi polumjer kugle:\n");
	scanf("%d", &polumjer);
	printf("Unesi visinu stozca:\n");
	scanf("%d", &visina);
	float V = volumen(polumjer, visina);
	printf("Volumen stozca je %f\n", V);
	float B = baza(polumjer);
	printf("Povrsina baze stozca je %f\n", B);
	float s = polumjer_plasta(polumjer, visina);
	printf("Polumjer plasta stozca je %f\n", s);
	float M = povrsina_plasta(polumjer, visina);
	printf("Povrsina plasta stozca je %f\n", M);
	float O = oplosje(polumjer, visina);
	printf("Oplosje stozca je %f\n", O);
	return 0;
}