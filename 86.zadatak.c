/*Isprintajte sve vrijednosti hrvatske abecede na ekran.
*/
#include <stdio.h>

int main()
{
    int j;

    for (j = 0; j <= 32; j++)
    {
        printf("Sve vrijednosti hrvatske abecede  %c = %d\n", j, j);
    }

    return 0;
}
/*
Ovaj zadatak nam pokazuje kako prvo printamo vrijednosti hrvatske abecede. Pomocu for petlje svih 32 znakova
stavimo da prolaze kroz imaginarno polje. Preko %c i %d izjednacimo da bismo dobili numericke vrijednosti svih 32 znaka i obratno.
*/
