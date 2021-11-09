#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*Izracunajte opseg i povrsinu trokuta. Rezultat ispisite na ekran.*/
int main() {
	float a, b, c;
	float opseg, povrsina;

	do {
		printf("Unesite stranice a,b,c \n");
		scanf_s("%f, %f ,%f", &a, &b, &c);
	} while (c * c != a * a + b * b);


	opseg = a + b + c;
	povrsina = a * b / 2;
	printf("Opseg: %f \n", opseg);
	printf("Povrsina: %f \n", povrsina);
	return 0;
}
/*Unosimo vrijednosti a,b,c. While petljom provjeravamo da nam slucajno jedan od unosa ne bi bio nula. Ako bi nam bio jednak nuli
nas program bi pucao pa se while petljom ogradujemo da nemamo nijedan unos koji je jednak nuli. Opseg i povrsinu definiramo kao formule
te ispisujemo na ekran rezultat koji smo dobili.*/