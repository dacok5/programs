/*Program treba naci sumu svih brojeva od 1 do N*/
#include<stdio.h>
int serije(int n);
int rserije(int n);

int main()
{
    int n;
    printf("Unesi koliko brojeva ce sumirat : ");
    scanf("%d", &n);

    printf("\b\b Pomocu rekurzije: \n");
    printf("\b\b = %d\n", serije(n));
    printf("\n\b\b Pomocu rekurzije: \n");
    printf("\b\b = %d\n\n\n", rserije(n));

    return 0;
}

int serije(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        printf("%d + ", i);
        sum += i;
    }
    return sum;
}

int rserije(int n)
{
    int sum;
    if (n == 0)
        return 0;
    sum = (n + rserije(n - 1));
    printf("%d + ", n);
    return sum;
}