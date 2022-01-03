#include<stdio.h>
/*Pronadite sumu svih brojeva do broja koju korisnik unese.*/
int sum(int n)
{
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        m += i;
    }
    return m;
}

int main()
{
    int n, rez;
    printf("Do kojeg broja zelite pronaci sumu: ");
    scanf_s("%d", &n);
    rez = sum(n);
    printf("1+2+3+….+%d+%d = %d", n - 1, n, rez);
}

/*Napravili smo funkciju kojom sumiramo sve brojeve do zadanog broja. U main funkciji moramo deklarirati varijable
(kao varijablu n smo postavili udaljenost izmedu brojeva, a varijablom rez smo deklarirali rezultat sume svih n brojeva).
Pozivamo funkciju sume u mainu te ispisujemo rezultat.*/