/*Prigram mora raditi tako da mnozi dva broja s plus operatorom*/

#include <stdio.h>

int main()
{
    int a, b;
    int umnozak, i;

    printf("Unesi prvi broj : ");
    scanf("%d", &a);
    printf("\nUnesi drugi broj: ");
    scanf("%d", &b);

    umnozak = 0;
    for (i = 1; i <= b; i++) {
        umnozak += a;
    }
    printf("\nUmnozak od  %d i %d je : %d\n", a, b, umnozak);
    return 0;
}