#include "main.h"
/**
 * get_bit - the func to get index
 * @n: the num
 * @index: the index
 * Return: is the index value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
	return (-1);
	}
	return (n >> index & 1);
}
