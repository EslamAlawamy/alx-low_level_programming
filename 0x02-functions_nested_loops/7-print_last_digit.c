#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int e;

	e = n % 10;
	if (n < 0)
	{
		_putchar(-e + 48);
		return (-e);
	}
	else
	{
		_putchar(e + 48);
		return (e);
	}
}
