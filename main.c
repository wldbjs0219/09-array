#include <stdio.h>
#include <stdlib.h>
#define size 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a[size]={1,2,3,4,5};
	int b[size]={1,2,2,4,5};
	int i;
	
	for(i=0;i<5;i++)
	{
		if(a[i] != b[i])
		{
			printf("%i is different.\n",i );
		}
	
	
	}
		
	
	return 0;
}
