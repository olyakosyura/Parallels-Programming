#include "print.h"
int main (void)
{
	print_graph ();
	transport();
	
}

int transport(void)
{
	int ssize=4;
	
	int dsize=3;
	printf("\n Ssize = %d; Dsize = %d", ssize, dsize);
	int* destination[dsize];
	for(int i=0; i<3; i++){destination[i]=20;}	
	int* sourses[ssize] = (10,20,10,20);
	int* prices[ssize][dsize] = (1,2,3,4;2,3,4,5;3,4,5,6);

	printf(destination);
}

