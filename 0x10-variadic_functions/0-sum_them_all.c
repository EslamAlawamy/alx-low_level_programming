#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - the main fun
 * @n: the 1st var
 * Return: numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nptr;
	unsigned int f;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(nptr, n);
	for (f = 0; f < n; f++)
	{
		sum = sum + va_arg(nptr, int);
	}

	va_end(nptr);
	return (sum);
}
