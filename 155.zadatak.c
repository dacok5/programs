/*Kopiraj jedan string u drugi, koristi bilo koju metodu rjesavanja.*/

#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];
    int i;

    
    printf("Unesi neki string: ");
    gets(text1);

    i = -1;
    while (text2[i] = text1[++i]);

    printf("Prvi string = %s\n", text1);
    printf("Drugi string = %s\n", text2);
    printf("Kopirano = %d\n", i);

    return 0;
}