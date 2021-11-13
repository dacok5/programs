#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Odredite kolike su velicine tipova podataka. Na ekran ispisite vrijednosti u byte.*/

int main()
{
    char A;
    short B;
    int C;
    long D;
    float E;
    double F;


    printf("Velicina od char: %ld byte\n", sizeof(A));
    printf("Velicina od short: %ld bytes\n", sizeof(B));

    printf("Velicina od int: %ld bytes\n", sizeof(C));
    printf("Velicina od long: %ld bytes\n", sizeof(D));

    printf("Velicina od float: %ld bytes\n", sizeof(E));
    printf("Velicina od double: %ld bytes\n", sizeof(F));



    return 0;
}
/*Deklariramo sve moguce tipove podataka te sa sizeof funkcijom u printf-u "pozovemo" svaku od funkcija te na taj nacin
ispisujemo velicinu nasih tipova podataka.*/