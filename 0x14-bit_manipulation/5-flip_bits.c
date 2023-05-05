#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: the num
 * @m: num var
 * Return: number that flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int i = 0;

	while (flipped)
	{
		if (flipped & 1)
			i++;
		flipped = flipped  >> 1;
	}
	return (i);
}
