/*Pronadite duljinu stringa korsiteci pointersku notaciju*/

#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char text[MAX_SIZE]; 
    char* str = text; 
    int count = 0;

    
    printf("Unesite neki string: ");
    gets(text);

    
    while (*(str++) != '\0') count++;

    printf("Duljina '%s' = %d", text, count);

    return 0;
}