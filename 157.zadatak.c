/*Napravite program koji kopira jedan string u drugi pomocu funkcije strcpy()*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];

    printf("Unesite neki string: ");
    gets(text1);

   
    strcpy(text2, text1);

    printf("Prvi string = %s\n", text1);
    printf("Drugi string = %s\n", text2);

    return 0;
}