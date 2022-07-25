/*Pronadite duljinu polja koristeci strlen() funkicju*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

int main()
{
    char text[MAX_SIZE]; 
    int length;

    printf("Unesite neki string: ");
    gets(text);

    length = strlen(text);

    printf("Duljina '%s' = %d", text, length);

    return 0;
}