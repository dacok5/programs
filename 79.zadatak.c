#include <stdio.h>

// Napiši program pomocu kojeg ce korisnik izracunati dvostruku vrijednost ucitanog cijelog broja pomocu funkcije

// Funkcija za izracunavanje sume.
int suma(int broj)
{
    int suma;

    suma = broj + broj;

    return suma;

}
int main()
{
    int broj, x;

    printf("Unesi broj: ");
    scanf("%d", &broj);
    x = suma(broj);
    printf("%d + %d = %d ", broj, broj, x);

    return 0;
}

