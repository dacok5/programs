/* Napisite C program koji ce omoguciti korisniku unos n brojeva u polje realnih brojeva.
 * Nakon toga polje treba sortirati u rastucem redoslijedu algoritmom zamjene susjednih
 * elemenata i algoritmom izbora najmanjeg elementa te pritom brojati koliko zamjena elemenata
 * izvrsi pojedini algoritam.
 * Na ekran ispisati koliko je zamjena izvrsio pojedini algoritam.*/
#include<stdio.h>
int input(float* a, float* b) {
    int n, i;
    float temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f", &temp);
        a[i] = temp;
        b[i] = temp;
    }
    return n;
}
void print(float* a, int n) {
    int i;
    printf("print: ");
    for (i = 0; i < n; i++) {
        printf("%.2f, ", a[i]);
    }
    printf("\n");
}
void swap(float* a, float* b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int bubble_sort(float* a, int n) {
    int i, counter = 0;
    int sort = 1;
    while (sort == 1) {
        sort = 0;
        for (i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                swap(&a[i], &a[i + 1]);
                sort = 1;
                counter++;
            }
        }
    }
    return counter;
}
int selection_sort(float* a, int n) {
    int i, j;
    int counter = 0;
    int min;
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(&a[i], &a[min]);
        counter++;
    }
    return counter;
}

int main(void) {
    float a[50], b[50];
    int bubble_score = 0, select_score = 0;
    int n = 0;
    n = input(a, b);
    print(a, n);
    print(b, n);
    bubble_score = bubble_sort(a, n);
    print(a, n);
    printf("Bubblesort je vratio: %d\n", bubble_score);
    select_score = selection_sort(b, n);
    print(b, n);
    printf("Selectionsort je vratio: %d\n", select_score);

    printf("REZULTATI:\n");
    printf("Bubble sort je izvrsio %d zamjena, a selection sort %d zamjena.", bubble_score, select_score);

    return 0;
}