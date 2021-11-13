#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Isprintaj englesku abecedu (samo mala slova).*/
int main()
{
    char a;

    printf("Abeceda od a do z: \n");
    for (a = 'a'; a <= 'z'; a++)
    {
        printf("%c\t", a);
    }

    return 0;
}
/*U for petlji stavljamo da nam slova idu od malog a do malog z. Posto smo nas char deklarirali s a, u for petlji koristimo a, a ne i
kao u vecini slucajeva za for petlje. Na kraju samo isprintamo nasu abecedu.*/