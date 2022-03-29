#include<stdio.h>
/*Koristenje pointera.*/
int main() {
	int* p;
	int a = 5;
	p = &a;
	printf("%d", a); //ispisuje 5
	printf("%p", &a);//ispisuje adresu od a
	printf("%p", p);//ispisuje adresu od a
	printf("%d", *p);//ispisuje adresu od 5
}