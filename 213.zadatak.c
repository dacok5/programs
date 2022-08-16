/*Napisite program koji odreduje faktorijel unesenog broja.*/
#include <stdio.h>

void faktoriel(int, int*);
int main()
{
    int fact;
    int num1;
    printf("\n\n Pronadite faktoriel danog broja :\n");
    
    printf(" Unesite broj : ");
    scanf("%d", &num1);

    faktoriel(num1, &fact);
    printf(" Faktoriel danog broja %d je : %d \n\n", num1, fact);
    return 0;
}

void faktoriel(int n, int* f)
{
    int i;

    *f = 1;
    for (i = 1; i <= n; i++)
        *f = *f * i;
}