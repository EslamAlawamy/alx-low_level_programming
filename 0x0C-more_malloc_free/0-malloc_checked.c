#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - the main proto
 * @b: the var
 * Return: re
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (mc == NULL)
		exit(98);
	return (m);
}
