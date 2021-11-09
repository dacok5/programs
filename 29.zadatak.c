#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*Omogucite korisniku unos znaka te pretvorite taj znak u broj pomocu ASCII zakona. Ispisite na ekran vrijednost.*/
int main()
{
    char c;
    printf("Unesite znak:");
    scanf_s("%c", &c);
    printf("\nASCII vrijednost od unesenog znaka je: \n %c = %d", c, c);
    return 0;
}
/*Omogucavamo korisniku unos znaka, no da ne moramo svaki put gledati u ASCII tablicu koja nam je vrijednost pojedinih znakova
mi mozemo izjednaciti vrijednosti znaka s vrijednosti njegove same vrijednosti. Lakse receno, izjednacavamo %c s %d da bi prebacili
znak u njegovu ASCII vrijednost te ispisujemo na ekran.*/