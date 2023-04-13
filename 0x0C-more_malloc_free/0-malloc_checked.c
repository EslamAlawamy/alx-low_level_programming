#include "main.h"
/**
 * malloc_checked - the main proto
 * @b: the var
 * Return: re
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (mc == NULL)
		exit(98);
	return (m);
}
