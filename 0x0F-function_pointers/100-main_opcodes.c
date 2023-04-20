#include <stdio.h>
/**
 * main - the main func
 * @argc: arg count
 * @argv: arg vector
 * Return: is 0
 */
int main(int argc, char *argv[])
{
	int i;
	int b;
	char *memc = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		printf("%02hhx", memc[i]);
		if (i + 1 != b)
			printf(" ");
	}
	return (0);

}
