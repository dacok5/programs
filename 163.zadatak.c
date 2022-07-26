/*Pronadi obrnuti oblik stringa koristeci pointersku notaciju */

#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE], reverse[MAX_SIZE];
    char* s = str;
    char* r = obrnut;
    int len = 0;

    printf("Unesi neki string: ");
    gets(str);

    while (*(s++)) len++;

    s--;
    while (len >= 0)
    {
        *(r++) = *(--s);
        len--;
    }
    *r = '\0';

    printf("\nOriginalni string = %s\n", str);
    printf("Obrnuti string = %s", obrnut);

    return 0;
}