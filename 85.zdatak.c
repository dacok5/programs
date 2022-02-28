
/*Odredite velicine odabranih po zelji tipove podataka te im onda ispisite vrijednosti u byte.
*/
#include <stdio.h>

int main()
{
    int a;
    char b;
    short c;
    float d;
    long e;
    double f;


    printf("Velicina od int: %ld byte\n", sizeof(a));
    printf("Velicina od char: %ld bytes\n", sizeof(b));

    printf("Velicina od short: %ld bytes\n", sizeof(c));
    printf("Velicina od float: %ld bytes\n", sizeof(d));

    printf("Velicina od long: %ld bytes\n", sizeof(e));
    printf("Velicina od double: %ld bytes\n", sizeof(f));



    return 0;
}

/*
Prvo deklariramo tipoove podataka po zelji redom koji zelimo i onda pomocu sizeof funkcije prizovemo svaku od funkcija
te tako onda ispisemo velicinu odabranih tipova podataka.
*/