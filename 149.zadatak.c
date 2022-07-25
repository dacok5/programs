/*Pronadi duljinu stringa koristeci for petljju*/

#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char text[MAX_SIZE]; 
    int i;
    int count = 0;

  
    printf("Unesi neki string: ");
    gets(text);

    for (i = 0; text[i] != '\0'; i++)
    {
        count++;
    }

    printf("Duljina '%s' = %d", text, count);

    return 0;
}