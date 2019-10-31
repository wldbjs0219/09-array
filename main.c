#include <stdio.h>
#include <stdlib.h>
#define size 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int grade[size];
	int score[size];
	int i;
	
	for(i=0;i<5;i++)
	{
		grade[i]=rand()%100;
	}
	for (i=0;i<5;i++)
	{
	 score[i]=grade[i];
	}
	for (i=0;i<5;i++)
	{
		printf("score[%d]: %d\n", i, score[i]);
	}
		
	
	return 0;
}
