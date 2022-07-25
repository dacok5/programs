/*Moramo omoguciti progamu da upise 10 brojeva i ispisat sumu parnih brojeva i produkt neparnih brojeva.*/

#include<stdio.h>

int main()
{
    int n, suma = 0, prod = 1, i;
    printf("Unesi 10 brojeva : \n");
    for (i = 0; i < 10; i++)
    {
        printf("\nUnesi %d broj : ", i + 1);
        scanf("%d", &n);
        if (n % 2 == 0)
            suma = suma + n;
        else
            prod = prod * n;
    }
    printf("\nSuma parnih brojeva je : %d \n", suma);
    printf("\nProdukt neparnih brojeva je : %d\n", prod);
    return 0;
}
