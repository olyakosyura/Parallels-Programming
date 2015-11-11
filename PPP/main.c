#include "print.h"
#include <stdio.h>

int main (void)
{
	print_graph ();
	transport();
	
}

int transport(void)
{
	int ssize=6;
	
	int dsize=3;
	printf("\n Ssize = %d; Dsize = %d", ssize, dsize);
	int destination[dsize];
	int i;
	int j;
	for(i=0; i<dsize; i++){destination[i]=20;}	
	
	int sourses[ssize];

	for(i=0; i<ssize; i++){sourses[i]=10;}
	int prices[ssize][dsize];


	for(i=0; i<ssize; i++)  
	{for (j=0; j<dsize;j++)	{
		printf("a[%d,%d] = ", i,j);
     		scanf("%d", &prices[i][j]); // &a[i] - адрес i-го элемента массива
    		}
	}

	printf("\n Destinations: \n");
	for(i=0;i<dsize;i++)  
	{     	
		printf("%d ",destination[i]); // пробел в формате печати обязателен
    	}

	printf("\n sourses: \n");
	for(i=0;i<ssize;i++)  
	{     	
		printf("%d ",sourses[i]); // пробел в формате печати обязателен
    	}
	
	printf("\n Matrix: \n");
	for(i=0; i<ssize; i++)  
	{for (j=0; j<dsize;j++)	{
		printf("%d ", prices[i][j]);
     		}
	printf("\n");
	}


		
}

