/*Kopiraj string jedan u drugi koristeci while petlju*/

#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    int i;

  
    printf("Unesite neki string: ");
    gets(text1);

    i = 0;
    while (text1[i] != '\0')
    {
        text2[i] = text1[i];
        i++;
    }

    text2[i] = '\0';

    printf("Prvi string = %s\n", text1);
    printf("Drugi string string = %s\n", text2);
    printf("Kopirano = %d\n", i);

    return 0;
}