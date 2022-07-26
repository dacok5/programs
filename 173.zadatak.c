/* Napisite funkciju veci_od_sr() kojoj cete predati pokazivac na matricu i dimenziju matrice.
Funkcija treba dinamicki alocirati memoriju za 1D polje cije elemente treba dobiti na
sljedeci nacin: pobrojiti koliko je elemenata svakog stupca vece od srednje vrijednosti
pojedinog stupca. Funkcija vraca 1D polje.

Napisite funkciju unos_elemenata() kojoj cete predati pokazivac na datoteku i dimenzije matrice.
Funkcija treba dinamicki alocirati memoriju za matricu  te ucitati vrijednosti elemenata za n redova i stupaca
iz datoteke. Vratiti adresu kreirane matrice.

Napisati funkciju print() kojoj cete predati pokazivac na matricu i dimenziju matrice.
Funkcija treba ispisati  matricu na ekran u matricnom obliku (odvojiti svaki element
retka tabulatorom). Funkcija ne vraca nikakvu vrijednost.

U glavnom dijelu programa ucitati dimenziju matrice iz datoteke dim.txt (u datoteci su
zapisana 2 cijela broja koja oznacavaju broj redaka i stupaca matrice). Pomocu definiranih
funkcija, unijeti elemente matrice (realni brojevi) iz datoteke mat.txt, ispisati unesenu matricu te nakon
ispisa "REZULTATI:\n" ispisati 1D polje koje je kreirala funkcija veci_od_sr().

 */
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>

float* veci_od_sr(float**, int, int);
float** unos_elemenata(FILE*, int, int);
void print(float**, int, int);
int main(void) {

    int rows, cols, i;
    float** M;

    float* polje;
    FILE* pFile = fopen("dim.txt", "r");
    fscanf(pFile, "%d%d", &rows, &cols);
    fclose(pFile);

    pFile = fopen("mat.txt", "r");
    M = unos_elemenata(pFile, rows, cols);
    print(M, rows, cols);


    polje = veci_od_sr(M, rows, cols);

    printf("\nREZULTATI:\n");
    for (i = 0; i < cols; i++)
        printf("%d ", (int)polje[i]);
    return 0;
}
float* veci_od_sr(float** M, int n, int m) {
    int i, j;
    float* polje;
    float sum = 0;
    float sr = 0;
    int br = 0;
    polje = (float*)malloc(m * sizeof(float));
    for (j = 0; j < m; j++) {
        polje[j] = 0;
        for (i = 0; i < n; i++) {
            polje[j] += M[i][j];
        }
        polje[j] = polje[j] / n;
        printf("%.2f ", polje[j]);
    }
    for (j = 0; j < m; j++) {
        br = 0;
        for (i = 0; i < n; i++) {
            if (M[i][j] > polje[j]) {
                br++;
            }
        }
        polje[j] = br;
    }
    return polje;
}
float** unos_elemenata(FILE* pFile, int n, int m) {
    float** M;
    int i, j;
    M = (float**)malloc(n * sizeof(float*));
    for (i = 0; i < n; i++) {
        *(M + i) = (float*)malloc(m * sizeof(float));
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            fscanf(pFile, "%f", &M[i][j]);
        }
    }
    fclose(pFile);
    return M;
}
void print(float** M, int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%.2f\t", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}