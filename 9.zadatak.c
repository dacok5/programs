#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define DG -999
#define GG 123456
/*Omogucite korisniku unos dimenzija matrice mxn koje su unutar intervala 10<m<=50 te 12<n<=33. Popunite matricu
pseudoslucajnim brojevima iz intervala [-999,123456], ali vrijednosti iz intervala [-100,1000] ne smiju biti
ukljucene. Isprintajte matricu na ekran..*/
int main() {
	int m;
	int n;
	int i;
	int j;
	srand((unsigned)time(NULL));
	do {
		scanf_s("%d%d", &m, &n);
	} while (!(m > 10 && m <= 50 && n > 12 && n <= 33));
	float mat[50][33];
	float privremena;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			do {
				privremena = DG + (float)rand() / RAND_MAX * (GG - DG);
			} while (privremena >= -100 && privremena <= 1000);
			privremena = mat[i][j];
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%f", privremena);
		}
	}
	return 0;

}

/*U ovom kao i u proslom zadatku omogucili smo korisniku da unese dimenzije mxn matrice. Dimenzije matrice moraju
biti unutar zadanog intervala te takoder moramo obratiti paznju da nam je ovaj put zadano da popunimo matricu
pseudoslucajnim brojevima iz odredenog intervala te da taj interval ne smije sadrzavati jedan skup brojeva.
Najlakse je za shvatiti na primjeru. ("Popuni matricu pseudoslucajnim iz intervala [-999,123456]/[-100,1000].")
Znaci da nam svi brojevi iz intervala [-100,1000] nece popunjavati nasu matricu. Na kraju samog koda nakon popunjavanja
prolazimo kroz matricu for() petljama te isprintamo nasu matricu na ekran. U varijablu privremena sam spremio vrijednosti
od mat[i][j] radi lakseg baratanja kodom.*/