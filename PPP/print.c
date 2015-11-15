#include <stdio.h>

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



