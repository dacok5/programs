/*Napisite program koji ce izbaciti najveci moguci broj koji je unesen*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    const char** X = (const char**)a;
    const char** Y = (const char**)b;

    int chr_len = strlen(*X) + strlen(*Y) + 1;

    char XY[chr_len];
    strcpy(XY, *X);
    strcat(XY, *Y);

    char YX[chr_len];
    strcpy(YX, *Y);
    strcat(YX, *X);

    return strcmp(YX, XY);
}

int main(void)
{
    char* arr1[] = { "15", "628", "971", "9", "2143", "12" };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;
  
    printf("Uneseni brojevi su :  \n");
    for (i = 0; i < n; i++)
    {
        printf("%s  ", arr1[i]);
    }
    printf("\n");
    	
    qsort(arr1, n, sizeof(arr1[0]), compare);
    printf("Najveci moguci broj od unesenih je: ");
    for (int i = 0; i < n; i++)
        printf("%s", arr1[i]);
    return 0;
}