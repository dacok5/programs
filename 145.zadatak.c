/*Napravi program koji ispisuje vrijednost polja pomocu pointera*/

#include <stdio.h>

#define MAX_SIZE 100 

int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int* ptr = arr;    

    printf("Velicina polja ");
    scanf("%d", &N);

    printf("Elementi polja\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);

       
        ptr++;
    }

    
    ptr = arr;

    printf("Elementi polja: ");
    for (i = 0; i < N; i++)
    {
        
        printf("%d, ", *ptr);

        
        ptr++;
    }

    return 0;
}