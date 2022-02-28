/* Omogucite korisniku unos BROJA te svaki od tih BROJA podijelite s vrijednoscu od 2 do 18 te napravite tablicu.
*/
#include <stdio.h>
int main()
{
    int k;
    int BROJ;

    printf("Unesite BROJ: ");
    scanf_s("%d", &BROJ);

    for (k = 2; k <= 19; k++)
    {

        printf("%d + %d = %d\n", BROJ, k, (BROJ / k));
    }

    return 0;
}
