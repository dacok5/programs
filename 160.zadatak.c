/*Napravi program koji usporeduje stringove*/

#include <stdio.h>
#define MAX_SIZE 100 

int compare(char* str1, char* str2);


int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;

    printf("Unesi prvi string: ");
    gets(str1);
    printf("Unesi drugi string: ");
    gets(str2);


    res = compare(str1, str2);

    if (res == 0)
    {
        printf("Oba stringa su ista.");
    }
    else if (res < 0)
    {
        printf("Prvi string je manji od drugog.");
    }
    else
    {
        printf("Prvi string je veci od drugog.");
    }

    return 0;
}
int compare(char* str1, char* str2)
{
    int i = 0;


    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' && str2[i] == '\0')
            break;

        i++;
    }
    return str1[i] - str2[i];
}