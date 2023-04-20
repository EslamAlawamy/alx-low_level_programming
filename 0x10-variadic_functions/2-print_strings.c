#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - the main explain it self
 * @separator: var char
 * @n: var int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nptr;
	unsigned int f;
	char *string;

	va_start(nptr, n);
	for (f = 0; f < n; f++)
	{
		string = va_arg(nptr, char *);
		if (string != 0)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != 0 && f < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nptr);
}
