/*Napisati program koji mora dereferencirati varijable*/

#include<stdio.h>
int main()
{
    int a = 87;
    float b = 4.5;
    int* p1 = &a;
    float* p2 = &b;
    printf("Vrijednost od p1 = Adresa od a = %p\n", p1);
    printf("Vrijednost od p2 = Adresa od b = %p\n", p2);
    printf("Adresa od p1 = %p\n", &p1);
    printf("Adresa od p2 = %p\n", &p2);
    printf("Vrijednost od  a = %d  %d  %d \n", a, *p1, *(&a));
    printf("Vrijednost od  b = %f  %f  %f \n", b, *p2, *(&b));

    return 0;
}