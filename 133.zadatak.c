/*Napravi program koji  nalazi duljinu polja pomocu pointerske notacije*/

#include<stdio.h>

int string_ln(char*);

int main()
{
    char str[30];
    int duljina;

    printf("Unesi neki string: ");
    scanf("%s", str);

    duljina = string_duljina(str);
    printf("\nDuljina danog stringa [ %s ] je : %d\n", str, duljina);

    return 0;
}

int string_duljina(char* p) 
{
    int brojac = 0;
    while (*p != '\0') {
        brojac++;
        p++;
    }
    return brojac;
}