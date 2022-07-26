/*Pronadi obrnuti string koristeci funkciju strrev().*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE];

    printf("Unesi neki string: ");
    gets(str);

    printf("Originalni string = %s\n", str);

    strrev(str);

    printf("Obrnuti string = %s", str);

    return 0;
}