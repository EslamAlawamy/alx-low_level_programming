#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - the main
 * @format: st
 */
void print_all(const char * const format, ...)
{
	va_list fptr;
	int f = 0;
	char *str;

	va_start(fptr, format);
	while (format[f])
	{
		switch (format[f])
		{
			case 'c':
				printf("%c", va_arg(fptr, int));
				break;
			case 'i':
				printf("%d", va_arg(fptr, int));
				break;
			case 'f':
				printf("%f", va_arg(fptr, double));
				break;
			case 's':
				str = va_arg(fptr, char *);
				if (str != 0)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[f] == 'c' || format[f] == 'i' || format[f] == 'f'
					|| format[f] == 's') && format[f + 1] != 0)
		{
			printf(", ");
		}
		f++;
	}
	printf("\n");
	va_end(fptr);
}
