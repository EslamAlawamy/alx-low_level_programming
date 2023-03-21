#include <stdlib.h>
#include <time.h>
/**
 * main - the header of the code 
 *
 * Return: is the zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
{
	printf("is positive\n");
}
	else (n=0)
{
	printf("is zero\n");		
}	
	else (n<0)
{
	printf("is negative\n");	
}
	return (0);
}
