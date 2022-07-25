/*Napravite program koji ce okrenut redoslijed elemenata polja*/
#include <stdio.h>

#define MAX_SIZE 100

void printArr(int* arr, int size);


int main()
{
    int arr[MAX_SIZE];
    int size;
    int* left = arr;
    int* right;

    printf("Unesite velicinu polja: ");
    scanf("%d", &size);

    right = &arr[size - 1]; 
    
    printf("Unesite elemente polja: ");
    while (left <= right)
    {
        scanf("%d", left++);
    }


    printf("\nPolje prije okretanja: ");
    printArr(arr, size);

    left = arr;

    while (left < right)
    {
       
        *left ^= *right;
        *right ^= *left;
        *left ^= *right;

        left++;
        right--;
    }


    printf("\nPolje nakon okretanja: ");
    printArr(arr, size);


    return 0;
}

void printArr(int* arr, int size)
{
    int* arrEnd = (arr + size - 1);

    while (arr <= arrEnd)
    {
        printf("%d, ", *arr);

        arr++;
    }
}