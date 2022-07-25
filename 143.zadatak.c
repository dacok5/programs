/*Napisi program koji zbroji dva broja pomocu pointera*/

#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int* ptr1, * ptr2;

    ptr1 = &num1; 
    ptr2 = &num2; 

    printf("Unesi bilo koja dva broja: ");
    scanf("%d%d", ptr1, ptr2);

    sum = *ptr1 + *ptr2;

    printf("Sum = %d", sum);

    return 0;
}