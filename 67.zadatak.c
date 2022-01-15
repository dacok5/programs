/*Napisite program koji racuna povrsinu plasta stozca*/

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14


float povrsina_plasta(int r, int v) {

	float s;
	s = sqrt(r * r + v * v);
	float S = pi * s * r;
	return S;
}

int main() {
	int r, v;
	printf("Unesi polumjer stozca:\n");
	scanf("%d", &r);
	printf("Unesi visinu stozca:\n");
	scanf("%d", &v);
	float S = povrsina_plasta(r, v);
	printf("Povrsina plasta stozca je %f\n", S);
	return 0;
}

/*Program se sastoji od main funkcije i jedne posebne funkcije nazvne povrsina_plasta. U funkciji povrsina, napisali smo 
formulu za racunanje povrsine plasta stosca. U main funkciji zapisujemo varijable te pozivamo nasu funkciju da bismo izracunali
povrsinu.*/