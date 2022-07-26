/*Napravite program koji je u mogucnosti procitati datoteku i prikazati podatke datoteke pomocu fgets() funkcije.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
 
    FILE* fPtr;

    char ch;

    fPtr = fopen("data/datoteka.txt", "r");


    if (fPtr == NULL)
    {
        printf("Nemoguce otvaranje datoteke.\n");
        exit(EXIT_FAILURE);
    }


    printf("Datoteka otvorena uspjesno. Omoguceno citanje datoteke. \n\n");

    do
    {
        ch = fgetc(fPtr);

        putchar(ch);

    } while (ch != EOF);

    fclose(fPtr);


    return 0;
}