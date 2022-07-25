/*Kopiraj jedan string u drugi pomocu pointera*/

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];
    char* str1 = text1;
    char* str2 = text2;

  
    printf("Unesite neki string: ");
    gets(text1);

    while (*(str2++) = *(str1++));

    printf("Prvi string = %s\n", text1);
    printf("Drugi string = %s\n", text2);

    return 0;
}