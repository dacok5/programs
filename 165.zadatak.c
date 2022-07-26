/*Napravi program koji vraca natrag vrijednost preko funkcije polja*/

#include <stdio.h>

#define SIZE 10

int* istibrojevi(const int N, int* brojevi);


int main()
{
    int iistibrojevi[SIZE];
    int i;

    iistibrojevi(SIZE, istibrojevi);

    printf("Prvi %d isti broj je: \n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", *(istibrojevi + i));
    }


    return 0;
}


int* istibroejvi(const int N, int* brojevi)
{
    int i;

    for (i = 0; i < N; i++)
    {
        *(brojevi + i) = 2 * (i + 1);
    }

    return brojevi;
}