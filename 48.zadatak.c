#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*Ispravi pogreske u danom kodu*/
void digSum(int num) {
	int absNum = abs(num);   
	sum = 0; //int sum=0;
	while (absNum < 0) {
		sum += absNum % 10 //sum+=absNum%10;
			absNum /= 10;
	}
	return sum; //funkcija je void pa nema return
}
int main(void) {
	int nums[] = { 123; 345; 567; 890 }; int i; //int nums[]={123,345,567,890};
	for (i = 0; i < 4; i++)
		printf("%d\n", digSum(nums[i]));
	return 0;
}

/*Greske ispravljene pored zadatka. Kod je iz starih ispita iz kolegija programiranje 1.*/