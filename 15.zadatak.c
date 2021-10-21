#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Omoguciti korisniku unos elemenata kvadratne matrice dimenzija 3x3. 
Izracunati i na ekran ispisati zbroj elemenata glavne dijagonale i produkt elemenata sporedne dijagonale.*/
int main() {
	int i;
	int j;
	int zbr = 0;
	int prod = 1;
	int A[3][3];

	for (i = 0; i < 3; i++)
		for(j=0;j<3;j++)
			scanf_s("%d", &A[i][j]);
	zbr = 0;
	for (i = 0; i < 3; i++) 
		zbr += A[i][i];

	prod = 1;
	for (i = 0; i < 3; i++) 
		prod *= A[i][2 - i];

	printf("Zbroj elemenata glavne dijagonale je %d, a produkt sporedne je %d\n", zbr, prod);

	return 0;
}
/*Prvo deklariramo sumu i produkt. Kako ne smijemo mnoziti s 0, produkt postavljamo na vrijednost 1 kao pocetni
uvjet. For petljom prolazimo kroz matricu te unosimo proizvoljne elemente unutar matrice 3x3. Zbroj na glavnoj
dijagonali racunamo kao zbr+=A[i][i] jer nam je na glavnoj dijagonali i=j. Dok produkt za sporednu dijagonalu racunamo
kao prod*=A[i][broj elementa - 1 - i].U nasem slucaju [3-1-i] te na kraju ispisujemo rjesenje.*/