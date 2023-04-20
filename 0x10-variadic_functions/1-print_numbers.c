#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - the main explain it self
 * @separator: var char
 * @n: var int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nptr;
	unsigned int f;

	va_start(nptr, n);
	for (f = 0; f < n; f++)
	{
		printf("%d", va_arg(nptr, int));
		if (separator && f < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(nptr);
}
