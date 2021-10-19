#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Pronadite sumu glavne dijagonale matrice velicine 3x3. Ispisite rjesenje u obliku sume.*/

int main()
{
    int A[3][3];
    int i;
    int j;
    int suma = 0;

    
    printf("Unesi elemente matrice:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        suma+=A[i][i];
    }
    printf("\nSuma glavne dijagonale je = %d", suma);

    return 0;
}
/*Napravimo matricu velicine 3x3. Moramo koristiti dvije petlje jer imamo i redove i stupce u matrici kroz
koje moramo prolaziti. Prolazeci kroz polje scanf_s nam koristi kako bi unesli proizvoljne velicine u nasu matricu.
Kako su nam elementi glavne dijagonale i=j koristimo jednu for petlju da bi prosli kroz nasu matricu te kada racunamo
sumu, nasu matricu zapisujemo kao A[i][i] jer nam treba glavna dijagonala.*/