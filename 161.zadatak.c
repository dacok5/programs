/*Usporedi dva string koristeci funkciju strcmp()*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;

    
    printf("Unesite prvi string: ");
    gets(str1);
    printf("Unesite drugi string: ");
    gets(str2);


   
    res = strcmp(str1, str2);

    if (res == 0)
    {
        printf("Oba stringa su ista.");
    }
    else if (res == -1)
    {
        printf("Prvi string je manji od drugog");
    }
    else
    {
        printf("Prvi string je veci od drugog");
    }

    return 0;
}