/*
Omogucite korisniku unos cijelog broja n. 
Izracunajte i ispisite sumu prvih n brojeva.
*/
#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int sum = 0;
	int i;
	for(i=1;i<n+1;i++){
		sum += i; 
	}
	printf("%d",sum);
	return 0;
}
