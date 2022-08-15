/* Napisite C program koji ce usporediti dvije matrice po elementima te ispisati 1
ako obje matrice na tim indeksima imaju iste vrijednosti, a 0 ako matrice na tim indeksima
imaju razlicite vrijednosti.
Napisite funkciju unos_elemenata() kojoj cete predati pokazivac na datoteku, pokazivac na matricu
i dimenzije matrice. Funkcija treba ucitati iz datoteke vrijednosti elemenata za n redova i stupaca
te ih spremiti na proslijedenu adresu. Funkcija ne vraca nikakvu vrijednost.
Napisati funkciju ispis_matrice() kojoj cete predati pokazivac na matricu i dimenzije matrice.
Funkcija treba ispisati matricu na ekran u matricnom obliku. Funkcija ne vraca nikakvu vrijednost.
U glavnom dijelu programa ucitati dimenzije matrica iz datoteke dim.txt (u datoteci je zapisan 1
cijeli broj koji oznacava broj redaka i stupaca matrica). Dinamicki alocirati memoriju za matrice te,
koristeci gore kreirane funkcije, unijeti elemente prve matrice iz datoteke prva.txt, a
elemente druge matrice iz datoteke druga.txt. Ispisati unesene matrice pomocu funkcije ispis matrice
te ispisati rezultirajucu matricu usporedbe.
Rezultat ispisati u obliku (primjer za matrice 3x3):*/


#include<stdio.h>
#include<stdlib.h>
void unos_elemenata(FILE* f, int** mat, int n) {
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            fscanf(f, "%d", &mat[i][j]);
        }
    }
}
int identicne(int **M1,int rows1, int columns1, int **M2, int rows2, int columns2) {
  int i, j;
  if(rows1!=rows2||columns1!=columns2)
    return 0;
  for(i=0; i<rows1; i++){
    for(j=0; j<columns1; j++)
      if(M1[i][j]!=M2[i][j])
        return 0;


  }
  return 1;
}
void ispis_matrice(int** mat, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main(void) {
    int** M1, ** M2, ** M3;
    int i, j, n, rez = 0;
    FILE* f = fopen("dim.txt", "r");
    FILE* f1;
    FILE* f2;
    fscanf(f, "%d", &n);
    fclose(f);
    M1 = (int**)malloc(sizeof(int*) * n);
    for (i = 0; i < n; i++)
        M1[i] = (int*)malloc(sizeof(int) * n);

    M2 = (int**)malloc(sizeof(int*) * n);
    for (i = 0; i < n; i++)
        M2[i] = (int*)malloc(sizeof(int) * n);

    f1 = fopen("prva.txt", "r");
    unos_elemenata(f1, M1, n);
    ispis_matrice(M1, n);
    fclose(f1);

    f2 = fopen("druga.txt", "r");
    unos_elemenata(f2, M2, n);
    ispis_matrice(M2, n);
    fclose(f2);

    M3 = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
        M3[i] = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (M1[i][j] == M2[i][j])
                M3[i][j] = 1;
            else
                M3[i][j] = 0;
        }

    }
    puts("REZULTATI:");
    ispis_matrice(M3, n);

    return 0;
}
