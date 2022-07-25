/*Pokazi program koji radi kao double pointer*/

#include <stdio.h>

int main()
{
    int a;
    int* p1;
    int** p2;

    p1 = &a;
    p2 = &p1;

    a = 100;


    printf("Vrijednost od a (koristeci p1): %d", *p1);
    printf("\n\nVrijednost od a (koristeci p2): %d", **p2);


    *p1 = 200;
    printf("\n\nNakon mijenjanja, Vrijednost od a (koristeci p1): %d", *p1);
   
    **p2 = 200;
    printf("\n\nNakon mijenjanja, Vrijednost od a (koristeci p2): %d", **p2);

    return 0;
}