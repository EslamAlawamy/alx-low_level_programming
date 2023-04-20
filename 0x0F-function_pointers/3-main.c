#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - the main function
 * @argc: the argcount
 * @argv : the arg vector
 * Return: success
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int), n, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);

	if (operation == 0)
	{
		printf("Error\n");
		exit(99);
	}
	n = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (((argv[2][0] == '/') || (argv[2][0] == '%')) && (n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", operation(n, n2));
	return (0);
}
