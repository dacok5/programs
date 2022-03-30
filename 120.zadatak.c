#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
#define DG 1
#define GG 100

float funk(float*polje, int n){
	float sum=0;
	int i;
	for(i=0;i<n;i++){
		sum+=pow((1/polje[i]),-1);
		
	}
	return n-sum;
	}
	int main(){
		srand((unsigned)time(NULL));
		float polje[15];
	int i;
	for(i=0;i<15;i++){
		polje[i]=DG+(float)rand()/RAND_MAX*(GG-DG);
	}
	printf("%f",funk(polje,15);)
	
	return 0;
}
