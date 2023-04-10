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
	int i, j;
	int sum = 0;
	char c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			c = argv[i][j];
			if (c < '0' || c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
