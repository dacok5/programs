/* Napisite funkciju najveci() kojoj cete predati pokazivac na matricu i dimenziju matrice.
Funkcija treba dinamicki alocirati memoriju za novu matricu B cije elemente treba dobiti na sljedeci nacin:
pronaci najveci element u retku predane matrice (parametar funkcije) te cijeli redak matrice
pomnoziti sa sumom indeksa tog najveceg elementa retka matrice. Vratiti adresu kreirane matrice.

Napisite funkciju unos_elemenata() kojoj cete predati pokazivac na datoteku i dimenzije matrice.
Funkcija treba dinamicki alocirati memoriju za matricu  te ucitati vrijednosti elemenata za n redova i stupaca
iz datoteke. Vratiti adresu kreirane matrice.

Napisati funkciju print() kojoj cete predati pokazivac na matricu i dimenziju matrice.
Funkcija treba ispisati  matricu na ekran u matricnom obliku. Funkcija ne vraca nikakvu vrijednost.

U glavnom dijelu programa ucitati dimenziju matrice iz datoteke dim.txt (u datoteci je zapisan 1
cijeli broj koji oznacava broj redaka i stupaca matrice). Pomocu definiranih funkcija, unijeti elemente matrice
iz datoteke matrica.txt, ispisati unesenu matricu te nakon ispisa "REZULTATI:\n" ispisati novonastalu matricu.*/

#include<stdio.h>
int** alloc(int dim) {
    int i, ** M;
    M = (int**)malloc(dim * sizeof(int*));
    for (i = 0; i < dim; i++) {
        M[i] = (int*)malloc(dim * sizeof(int));
    }
    return M;
}
int** najveci(int** mat, int dim) {
    int i, j, ** B, max = 0, sum = 0;
    B = alloc(dim);
    for (i = 0; i < dim; i++) {
        max = mat[i][0]; sum = i + 0;
        for (j = 0; j < dim; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
                sum = i + j;
            }
        }
        for (j = 0; j < dim; j++) {
            B[i][j] = mat[i][j] * sum;
        }
    }
    return B;
}

int** unos_elemenata(FILE* f, int dim) {
    int i, j, ** M;
    M = alloc(dim);
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            fscanf(f, "%d", &M[i][j]);
        }
    }
    return M;
}
void print(int** mat, int dim) {
    int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    FILE* file = fopen("dim.txt", "r");
    FILE* matfile = fopen("matrica.txt", "r");
    int dim = 0;
    int** A, ** B;
    fscanf(file, "%d", &dim);
    fclose(file);
    A = unos_elemenata(matfile, dim);
    print(A, dim);
    B = najveci(A, dim);
    printf("REZULTATI:\n");
    print(B, dim);

    return 0;
}