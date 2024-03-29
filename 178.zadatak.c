/*Napravite program koji sortira podatke pomocu Insertion sortiranja.*/
#include <math.h> 
#include <stdio.h>   
void insertionSort(int array[], int n)
{
	int i, element, j;
	for (i = 1; i < n; i++) {
		element = array[i]; j = i - 1; while (j >= 0 && array[j] > element) {
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = element;
	}
}
void printArray(int array[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("n");
}
int main()
{
	int array[] = { 122, 17, 93, 3, 56 };
	int n = sizeof(array) / sizeof(array[0]);
	insertionSort(array, n);
	printArray(array, n);
	return 0;
}