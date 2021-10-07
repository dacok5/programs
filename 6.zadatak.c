#define CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
/*Omoguci korisniku unos 10 brojeva u polje cijelih brojeva. Izracunaj srednju vrijednost svih vrijednosti u polju te ju ispisi na ekran.*/
int main()
{
    int i;
    int polje[10];
    int srednja = 0;
    int suma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Unesi broj %d \n", (i + 1));
        scanf_s("%d", &polje[i]);
    }
    for (i = 0; i < 10; i++)
    {
        suma += polje[i];
    }

    srednja = suma / 10;
    printf("Srednja vrijednost unesenih brojeva je: %d", srednja);
    return 0;
}
/* U ovom zadatku trazimo srednju vrijednost elemenata u polju. Omogucujemo korisniku da proizvoljno unosi
maksimalno 10 brojeva u nase polje. Prva for() petlja nam omogucuje da prolazimo kroz polje te da damo korisniku
10 puta da unese proizvoljan broj. U scanf() nam je vazno da ne oznacimo &polje[10] jer bi nam to znacilo
da samo gledamo 10-ti element, a nama to nije u interesu, zato oznacimo s &polje[i] da nam se svaki put i mijenja.
Drugom for() petljom prolazimo kroz polje te radimo sumaciju/zbroj elemenata nakon unosa korisnika. Razlika izmedu
prve i druge for() petlje je ta da nam prva sluzi samo za unos i prolazak kroz polje dok nam druga sluzi za prolazak
kroz polje te kasnije sumaciju/zbroj elemenata koje smo unesli pomocu scanf() i prve for() petlje. Suma+=polje[i] nam
sluzi da pozbrajamo sve elemente polja, a srednja nam sluzi da izracunamo aritmeticku tj. srednju vrijednost polja.*/