
// Deklarirati strukturu formula1 u koju ce se spremiti ovakvi ulazni podaci:
// ime, prezime, momcad, startna pozicija, konacna pozicija i ostvareno vrijeme.
// U program ulazi broj vozaca i nakon toga redom podaci o njima.

#include<stdio.h>

struct formula1 {
    char ime[50];
    char prezime[50];
    char momcad[50];
    int start;
    int end;
    int hh;
    int mm;
    int ss;
} formula[20];

int main(void)
{
    int n;
    int i;
    int count = 0;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {
        gets(formula[i].ime);
        gets(formula[i].prezime);
        gets(formula[i].momcad);
        scanf("%d", &formula[i].start);
        scanf("%d", &formula[i].end);
        scanf("%d:%d:%d", &formula[i].hh, &formula[i].mm, &formula[i].ss);
        getchar();
    }
    printf("REZULTATI:\n");
    for (i = 0; i < n; i++) {
        if (formula[i].start > formula[i].end) {
            if (formula[i].hh < 1 || (formula[i].hh == 1 && formula[i].mm < 34)) {
                printf("%s %s %d %d\n",
                    formula[i].ime, formula[i].prezime,
                    formula[i].start, formula[i].end);
                count++;
            }
        }
    }
    if (count == 0) {
        puts("Nema niti jednog vozaca!");
    }
    return 0;
}