#include<stdio.h>
#include<string.h>
/*Napravite program koji izbrise sve samoglasnike u recenici koju unese korisnik.*/
int samoglasnici(char);

void main()
{
 

    char str[100], new[100];
    int i, j = 0;

    printf("Unesite string \n\n");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (samoglasnici(str[i]) == 1)
        {
            new[j] = str[i];
            j++;
        }
    }

    new[j] = '\0';

    printf("\n\nString nakon izbrisanih samoglasnika: \n\n%s", new);
    getch();
}

int samoglasnici(char slova)
{
    switch (slova)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return 0;

    default:
        return 1;
    }
}
/*Napravili smo posebnu funkciju (samoglasnici), radi lakseg snalazenja u kodu. U funkciju smo stavili sva slova koja pripadaju
samoglasnicima. Funkcija main nam je klasicna funkcija koja prolazi kroz "polje" tj. zadani string i sprema
nam samoglasnike. Kada se spremljeni znak podudari sa znakom iz funkcije on nam ne vraca nista, a ako se ne podudari sa znakom
iz funkcije samoglasnici spremamo ga i ispisujemo.*/