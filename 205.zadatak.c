/*Napisite program za zamjenu svakog elementa s najvecim elementom s njegove desne strane*/

#include<stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void replaceWithNextGreatest(int a[], int size)
{
    int maximum = a[size - 1];
    a[size - 1] = 0;
    for (int i = size - 2; i >= 0; i--)
    {
        int temp = a[i];
        a[i] = maximum;
        if (maximum < temp)
            maximum = temp;
    }
    printf("Nakon zamjene: ");
    printArray(a, size);
}

int main()
{
    int i, arr1[] = { 7, 5, 8, 9, 6, 8, 5, 7, 4, 6 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    printf("Dano polje:  ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
    replaceWithNextGreatest(arr1, n);
    return 0;
}


