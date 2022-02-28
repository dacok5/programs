/*Omoguci korisniku unos broja kojemu je suma kubova znamenki jednaka samom tom broju.*/
#include<stdio.h>
int main()
{
    int broj, kopija, suma = 0, a;

    printf("Unesi broj:");
    scanf("%d", &broj);
    kopija = broj;


    while (broj != 0)
    {
        a = broj % 10;
        suma = suma + (a * a * a);
        broj = broj / 10;
    }

    if (kopija == suma)
        printf("Suma kubova znamenki je jednaka broju %d", kopija);
    else
        printf("Suma kubova znamenki nije jednaka broju %d", kopija);

    return(0);
}

