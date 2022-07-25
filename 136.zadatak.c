/*Program treba ispisat razlicite tipove varijabla pomocu pointera*/

#include <stdio.h>

int main()
{
    printf("Velicina char pointera: %d\n", sizeof(char*));
    printf("\nVelicina int pointera: %d\n", sizeof(int*));
    printf("\nVelicina float pointera: %d\n", sizeof(float*));
    printf("\nVelicina long int pointera: %d\n", sizeof(long int*));
    printf("\nVelicina double pointera: %d\n", sizeof(double*));

    return 0;
}