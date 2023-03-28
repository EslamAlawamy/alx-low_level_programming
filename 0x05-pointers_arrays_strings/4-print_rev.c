#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	s--;
	for (l = 0; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
