/*Napravite program koji treba uneseni postotni  broj pretvorit normalni oblik */

#include<stdio.h>

float postotak(float broj) {

	broj = broj / 100;
	return broj;
}

int main() {
	float broj;
	printf("Unesi broj u obliku postotka %%:");
	scanf("%f", &broj);
	float broj1 = postotak(broj);
	printf("Zadani broj u postotnom obliku %.2f%% i u normalnom obliku je %.2f", broj, broj1);
	return 0;
}