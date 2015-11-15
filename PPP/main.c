#include "print.h"
#include <stdio.h>
    

int main (void)
{
	int towns_count, products_count;
	inputTP(&towns_count, &products_count);
	int graph[towns_count][towns_count];
	int products[products_count][towns_count];
	input(&towns_count, &products_count, &products , &graph);
	
	
	transport(towns_count, products_count);
	output(towns_count, products_count);	
}

int transport(int towns_count, int products_count)
{
	int dsize;
	int ssize;
	int destination[dsize];
	int sourses[ssize];
	int prices[ssize][dsize];	
	input_data(destination,sourses,ssize,dsize);	

	print_DandS(destination,sourses,ssize,dsize);	
}



int input_data(int destination[], int sourses[], int ssize, int dsize)
{
	
	printf("\n Ssize = %d; Dsize = %d \n", ssize, dsize);
	int i;
	int j;
	for(i=0; i<dsize; i++){destination[i]=20;}	
	
	
	for(i=0; i<ssize; i++){sourses[i]=10;}
	

	for(i=0; i<ssize; i++)  
	{for (j=0; j<dsize;j++)	{
		printf("a[%d,%d] = ", i,j);
     		//scanf("%d", &prices[i][j]); // &a[i] - адрес i-го элемента массива
    		}
	}

	
	/*printf("\n Matrix: \n");
	for(i=0; i<ssize; i++)  
	{for (j=0; j<dsize;j++)	{
		printf("%d ", prices[i][j]);
     		}
	printf("\n");
	}*/



}



