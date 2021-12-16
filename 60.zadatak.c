#include <stdio.h>
/*Dozvolite korisniku unos recenice. Ispisite tu recenicu preko pointera.*/
int main()
{
    char str[100];
    char* p;

    printf("Unesite recenicu: ");
    fgets(str, 100, stdin);

    
    p = str;

    printf("String je: ");
   
    while (*p != '\0')
        printf("%c", *p++);

    return 0;
}
/*U ovom zadatku omogucujemo korisniku unos znaka/recenice. Glavna stvar kod ovog zadatka je primjeriti da smo pointer p 
izjednacili sa stringom. While petljom provjeravamo da je korisnik uneso neki znak te u printfu moramo staviti *p++ iz razloga
da nam pointer printa sve znakove do znaka \0 koji je posljednji*/