/*Napravi program koji ce koristiti datoteku, omoguci korisniku pisanje unutar datoteke*/

#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

int main()
{
    char data[DATA_SIZE];
    FILE* fPtr;

    fPtr = fopen("data/datoteka1.txt", "w");


    if (fPtr == NULL)
    {
        printf("Nemoguce kreirati datoteku.\n");
        exit(EXIT_FAILURE);
    }

    printf("Unesi podatke u datoteku : \n");
    fgets(data, DATA_SIZE, stdin);


    fputs(data, fPtr);


    fclose(fPtr);

    printf("Datoteka kreirana i uspjesno spremljena. :) \n");


    return 0;
}