/*Zamijeni dva broja koristeci pointere, koristi swap funkciju*/

#include <stdio.h>

void swap(int* num1, int* num2);

int main()
{
    int num1, num2;

    printf("Unesi dva broja: ");
    scanf("%d%d", &num1, &num2);

    printf("Prije izmjene");
    printf("Vrijednost num1 = %d \n", num1);
    printf("Vrijednost num2 = %d \n\n", num2);
    
    swap(&num1, &num2);

    printf("Nakon zamjene n");
    printf("Vrijednost num1 = %d \n", num1);
    printf("Vrijednost num2 = %d \n\n", num2);

    return 0;
}

void swap(int* num1, int* num2)
{
    int temp;

    temp = *num1;

    *num1 = *num2;

    *num2 = temp;

    printf("Nakon izmjene u swap funkciji n");
    printf("Vrijednost num1 = %d \n", *num1);
    printf("Vrijednost num2 = %d \n\n", *num2);
}