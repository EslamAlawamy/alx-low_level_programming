#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers
 * from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		for(; n < 99; n--)
			printf("%d, ", n);
	}
}
