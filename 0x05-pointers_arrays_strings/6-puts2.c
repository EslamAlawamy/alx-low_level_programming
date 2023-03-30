#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] % 2 == 0; i++)
	{
		_putchar(str[i]);
	}
}
