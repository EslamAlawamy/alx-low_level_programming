#include <stdio.h>
/**
 * main - the main func
 * @argc: argument count
 * @argv: argument vector
 * Return: is always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
