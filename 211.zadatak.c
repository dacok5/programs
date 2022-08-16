/*Napisite program koji ce pronaci najveci broj polja koristeci dinamicku alokaciju.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    float* element;
    printf("\n\n Pronadi element/broj koji je najveci uz pomoc dinaicke alokacije :\n");
    printf(" Unesi elemente izmedu (1 - 100): ");
    scanf("%d", &n);
    element = (float*)calloc(n, sizeof(float));  
    if (element == NULL)
    {
        printf(" Greska.");
        exit(0);
    }
    printf("\n");
    for (i = 0; i < n; ++i)
    {
        printf(" Broj %d: ", i + 1);
        scanf("%f", element + i);
    }
    for (i = 1; i < n; ++i)
    {
        if (*element < *(element + i))
            *element = *(element + i);
    }
    printf(" Najveci element je :  %.2f \n\n", *element);
    return 0;
}
