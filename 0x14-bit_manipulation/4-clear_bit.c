#include "main.h"
/**
 * clear_bit - the main func
 * @n: the num
 * @index: the index
 * Return: 1 if it succsess
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
