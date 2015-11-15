#include <stdio.h>
#include <stdlib.h>

void print_DandS(int destination[], int sourses[],int ssize, int dsize)

{
	int i;

	printf("\n Destinations: \n");
	for(i=0;i<dsize;i++)  
	{     	
		printf("%d ",destination[i]); 
    	}

	printf("\n sourses: \n");
	for(i=0;i<ssize;i++)  
	{     	
		printf("%d ",sourses[i]);
    	}
	
}

int output(int  towns_count, int  products_count)
{
	FILE *file; 
	char *fname = "outputdata";
	file = fopen(fname,"w");
	
	
	if(file == NULL)
	{
		printf("не могу открыть файл '%s'",fname);
		return 0;
	}

	char *temp;
	fprintf(file,"Towns count = %d\nProducts count = %d",towns_count,products_count);
	fclose(file);


}

int inputTP(int * towns_count, int * products_count)
{
	FILE *file; 
	char *fname = "data";
	file = fopen(fname,"r");
	int i;

	
	if(file == NULL)
	{
		printf("не могу открыть файл '%s'",fname);
		return 0;
	}

	fscanf(file,"%d\n%d\n",towns_count,products_count);
	fclose(file);


}



int input(int * towns_count, int * products_count, int * products[*products_count][*towns_count], int * graph[*towns_count][*towns_count])
{
	FILE *file; 
	char *fname = "data";
	file = fopen(fname,"r");
	int i;

	
	if(file == NULL)
	{
		printf("не могу открыть файл '%s'",fname);
		return 0;
	}

	
	fscanf(file,"%d\n%d\n",towns_count,products_count);
	
	int j;
	for(i = 0; i<*products_count; i++)
	{
		for(j = 0; j<*towns_count; j++)
		{
			fscanf(file,"%d", products[i][j]);
		}
	}
	for(i = 0; i<*towns_count; i++)
	{
		for(j = 0; j<*towns_count;j++)
		{
			fscanf(file,"%d", graph[i][j]);
		}
	}
	fclose(file);


}




