/*Program treba izracunat duljinu suprotne katete pravokutnog trokuta.*/

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
#include<math.h>

float duljina(int a, int c)
{
    float b;
    b = sqrt((c * c) - (a * a));
    return b;
}


int main()
{
    int a, c;
    printf("Unesi duljine stranica pravokutnog trokuta i duljinu hipotenuze \n");
    scanf("%d %d", &a, &c);
    
    float b = duljina(a, c);
    printf("Duljina suprotne katete trokuta je: %.2f", b);
    return 0;
}