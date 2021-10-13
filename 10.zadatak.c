#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Omogucite korisniku unos elemenata u matricu velicine 3x3. Napravite dvije matrice te ih zbrojite.
Ispisite rjesenje na ekran u obliku matrice.*/
int main()
{
    int A[3][3]; 
    int B[3][3]; 
    int C[3][3]; 
    int i, j;

    printf("Unesite elemente matrice A: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", &A[i][j]);
        }
    }

    printf("\n Unesite elemente matrice B: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\n Zbroj matrica = \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*Omogucili smo korisniku unos velicina prvo za matricu A te onda smo omogucili korisniku unos za matricu B.
Korisniku je omogucen unos scanf() funkcijom no prije toga su nam potrebne dvije for petlje da bi prolazili kroz
matricu tj. kroz svako polje zasebno. Ponavljamo proces unosa za matricu B. Kako 
bismo izracunali sumu matrica A i B opet moramo prolaziti kroz matrice te zapisujemo sumu na nacin da ju spremimo
u varijablu koja nam se ponasa kao matrica C te krajnje da bi nam ispis bio valjan opet moramo prolaziti for petljama
te ispisujemo pohranjene vrijednosti iz matrice C.*/
