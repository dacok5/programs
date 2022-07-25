/*Napravite program koji kopira jedno polje u drugo*/

#include <stdio.h>
#define MAX_SIZE 100 

void printArray(int arr[], int size);


int main()
{
    int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;

    int* source_ptr = source_arr;  
    int* dest_ptr = dest_arr;    

    int* end_ptr;

    printf("Unesite velicinu polja: ");
    scanf("%d", &size);
    printf("Unesite elemente polja: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (source_ptr + i));
    }

    end_ptr = &source_arr[size - 1];


    printf("\nSource polja prije kopiranja: ");
    printArray(source_arr, size);

    printf("\nDestination polja prije kopiranja: ");
    printArray(dest_arr, size);

    while (source_ptr <= end_ptr)
    {
        *dest_ptr = *source_ptr;

        source_ptr++;
        dest_ptr++;
    }

    printf("\n\nSource polja nakon kopiranja: ");
    printArray(source_arr, size);

    printf("\nDestination polja nakon kopiranja: ");
    printArray(dest_arr, size);


    return 0;
}

void printArray(int* arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }
}