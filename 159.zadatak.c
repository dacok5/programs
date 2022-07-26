/*Povezite dva stringa pomocu funkcije strcat()*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];

    
    printf("Unesite prvi string: ");
    gets(str1);
    printf("Unesite drugi string: ");
    gets(str2);

    strcat(str1, str2);

    printf("Povezani stringovi = %s", str1);

    return 0;
}