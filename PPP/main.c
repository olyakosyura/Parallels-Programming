#include "print.h"
#include <stdio.h>
    

int main (void)
{
	int towns_count, products_count;
	input_sd(&towns_count, &products_count);



	transport();
	input_data(destination,sourses,ssize,dsize);	
	
	print_DandS(destination,sourses,ssize,dsize);
	
	
}

int transport(void)
{
	int dsize;
	int ssize;
	int destination[dsize];
	int sourses[ssize];
	int prices[ssize][dsize];	
		
}

int input_sd(int * towns_count, int * products_count)
{
	FILE *file; 
	char *fname = "data";
	file = fopen(fname,"r");
	
	
	if(file == NULL)
	{
		printf("не могу открыть файл '%s'",fname);
		return 0;
	}

	char *temp;
	fscanf(file,"%d\n%d",towns_count,products_count);
	fclose(file);
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



