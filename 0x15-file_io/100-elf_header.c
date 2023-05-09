#include "main.h"
#include <elf.h>
/**
 * main - the main fun
 * @argc: arguments counter
 * @argv: arguments vactor
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
