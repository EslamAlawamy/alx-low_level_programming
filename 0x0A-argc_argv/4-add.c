#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 0; i < argc; i++)
	{
		if (i < 48 && i > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum = sum + atoi(argv[i]);		
	}
	printf("%d\n", sum);
	return (0);
}
