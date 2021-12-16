#include <stdio.h>
/*Napisite program koji racuna broj suglasnika i broj samoglasnika, koristite pointersku notaciju.*/
int main()
{
    char str[100];
    char* p;
    int  brojac1 = 0, brojac2 = 0;

    printf("Unesite recenicu: ");
    fgets(str, 100, stdin);

   
    p = str;

    
    while (*p != '\0')
    {
        if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U'
            || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
            brojac1++;
        else
            brojac2++;
        
        p++;
    }

    printf("Broj samoglasnika: %d\n", brojac1);
    printf("Broj suglasnika: %d", brojac2);
    return 0;
}
/*Omogucujemo korisniku unos neke recenice. Kako moramo odrediti broj i samoglasnika i suglasnika, moramo koristiti dva brojaca
. Pointer p izjednacimo s unesenim stringom kako bi nam imalo smisla koristiti pointersku notaciju. While petljom prolazimo kroz
string i kada naletimo na samoglasnik spremamo ga u brojac 1, isto tako za suglasnik. Na kraju ispisujemo broj samoglasnika
i suglasnika u recenici*/