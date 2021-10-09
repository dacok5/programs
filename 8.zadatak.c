#define CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define DG 1
#define GG 101
/*Omoguciti korisniku unos dimenzija matrice m x n, gdje je 20 < m <= 40
i 10 <= n <= 30. Popuniti matricu pseudo slucajnim brojevima iz [1, 101].*/

void main() {
	int m, n;
	srand((unsigned)time(NULL));
	do {
		scanf_s("%d", &m);
		scanf_s("%d", &n);
	} while (!(20 < m && m <= 40 && 10 <= n && n <= 30));

	float matrica[40][30];

	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			matrica[i][j] = DG + (float)rand() / RAND_MAX * (GG - DG);
		}
	}
	return 0;
}
/*U ovom zadatku smo korisniku omogucili unos dimenzija u matricu s granicama 40,30. Kako bi smo zadovoljili interval
unosa koristimo do while petlju. Matrica je zapravo 2D polje pa ju kreiramo na nacin da napravimo varijablu npr.
int matrica[x][y] dok nam x i y predstavljaju velicine. Kako moramo prolaziti po stupcima i redovima moramo imati
dvije for petlje te uz to dvije varijable (i,j) koje nam oznacavju indekse polja. Zadano nam je da popunimo matricu
pseudoslucajnim brojevima iz intervala [1,101], popunjavamo matricu na nacin da napisemo formulu popunjavanja matrice.
Formula glasi matrica[i][j]=DG+(float)rand()/RAND_MAX*(GG-DG). Varijable GG i DG (donja i gornja granica) sam deklarirao
u samom zaglavlju koda radi lakseg snalazenja te ako je potrebno samo promijenim granice u zaglavlju. Mogao sam napisati
matrica[i][j]=1+(float)rand()/RAND_MAX*(101-1);, ali je lakse promijeniti granice u zaglvalju nego traziti u kodu
formulu te tamo mijenjati granice. Ovaj kod nam ne vraca nista nego nam samo prikazuje nacin kako napravimo matricu
te nam prikazuje popunjavanje matrice pseudoslucajnim brojevima.*/