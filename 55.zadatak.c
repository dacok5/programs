#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*Napravite primjer upotrebe sizeof i % operatora.*/

int main(void)
{
    int v[20];
    int i;

    for (i = 0; i < sizeof(v) / sizeof(v[0]); i++) { 
        v[i] = rand() % 10; 
       printf("v[%d] = %d\n", i, v[i]); 
    }

    return 0;
}
/*sizeof(v)/sizeof(v[0]) odgovara broju elem. polja v, popunjavanje radimo na nacin da polje popunjavamo slucajnim brojevima iz intervala [0,9].Na kraju 
ispisujemo elemente polja.*/