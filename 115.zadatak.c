/*U main-u napraviti trokut, inicijalizirati vrijednost i izracunati opseg.*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	float a, b, c, O;
	a = len2D(tr.t1.x, tr.t2.x, tr.t1.y, tr.t2.y);
	b = len2D(tr.t2.x, tr.t3.x, tr.t2.y, tr.t3.y);
	c = len2D(tr.t1.x, tr.t3.x, tr.t1.y, tr.t3.y);
	O = opseg(a + b + c);
	return 0;
}

/*Ovako bi trebala izgledati funkcija main u kojoj racunamo opseg trokuta uz
unaprijed napravljenu funkciju trokut gdje su nam zadane tocke trokuta*/