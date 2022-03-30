#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define DG -100
#define GG 100
	/*Napravite matricu koju popunjavate pseudo slucajnim brojevima iz intervala od -100 do 100.
	Popunite matricu svim parnim brojevima iz tog intervala te ispisite matricu na ekran.*/
	int main(){
		srand((unsigned)time(NULL));
		int n,m,
		int matrica[30][32];
		do{
			scanf("%d",²&m);
		}while(!(10<=m &&m<=30)&& (15<n && n<=32) && m<n);
		
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i%2 ==0){
				if(j%2==0){
					do{
					matrica[i][j]=DG+rand()/RAND_MAX*(GG-DG);
					} while(matrica[i][j]<100 && matrica[i][j]>(-100));
					else{
						do{
								matrica[i][j]=DG+rand()/RAND_MAX*(GG-DG);
						} while(matrica[i][j]<100 && matrica[i][j]>(-100));
					}
				}
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",matrica[i][j]);
		}
	}
	return 0; }

