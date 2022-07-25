/*Nadite duljinu stringa korsiteci while petlju*/
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char text[MAX_SIZE];
    int index = 0;

    printf("Unesite neki string: ");
    gets(text);

    
    while (text[index] != '\0')
    {
        index++;
    }

    printf("Duljina '%s' = %d", text, index);

    return 0;
}