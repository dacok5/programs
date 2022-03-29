#include<stdio.h>
#include<stdlib.h>

/*Napravite dvije strukture u kojoj ce jedna struktura primati komponente tocke dok ce druga struktura primati komponente trokuta.
U mainu unesite tocke za trokut (pod tocke se misle koordinate)*/

typedef struct tocka {
	float x;
	float y;
}tocka;

typedef struct trokut {
	tocka t1;
	tocka t2;
	tocka t3;
}trokut;

int main() {
	trokut tr;
	tr.t1.x = 2;
	tr.t1.y = 1;
	tr.t2.x = 0;
	tr.t2.y = 3;
	tr.t3.x = 4;
	tr.t3.y = 5;
};

/*U ovom zadatku smo pokazali kako napraviti dvije strukture tocka i trokut. Prvo moramo napraviti strukturu tocka jer
za strukturu trokut koristimo komponente iz strukture tocka pa ju moramo prvo definirati. tr.t1.x je x komponenta u ravnini
dok tr.t1.y je y komponenta u ravnini.*/