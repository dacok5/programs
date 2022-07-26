/*Napravite program koji "lancano" povezuje dva stringa*/

#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char* s1 = str1;
    char* s2 = str2;

    printf("Unesite prvi string: ");
    gets(str1);
    printf("Unesite drugi string: ");
    gets(str2);

    while (*(++s1));

    while (*(s1++) = *(s2++));

    printf("Povezani stringovi = %s", str1);

    return 0;
}