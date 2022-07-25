/*Program polju pointera treba pridodati vrijednosti*/

#include <stdio.h>

int main()
{

    int a, b, c;

    int* ptr[3];

    /*dodjelimo adrese svih varijabli na pointer. */
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;


    a = 100;
    b = 200;
    c = 300;

  
    printf("\tVrijednost od \ta: %d \tb: %d \tc: %d\n", *ptr[0], *ptr[1], *ptr[2]);

    *ptr[0] += 10;
    *ptr[1] += 10;
    *ptr[2] += 10;
    printf("\n\tNakon dodjele 10 vrijednosti \n\n");
    printf("\tVrijednost od \ta: %d \tb: %d \tc: %d\n", *ptr[0], *ptr[1], *ptr[2]);

    return 0;
}