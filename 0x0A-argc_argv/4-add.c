#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: co
 * @argv: ve
 * Return: is 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 1) {
        printf("0\n");
        return 0;
	for (i = 0; i < argc; i++)
	{
		if (i < 48 || i > 57)
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
