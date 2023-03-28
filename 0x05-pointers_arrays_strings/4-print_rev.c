#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int l = 0;
	int rev;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	for (rev = l; rev > 0; rev--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
