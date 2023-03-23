#include "main.h"
/**
 * print_alphabet_x10 - Yeah
 *
 * Return: is 0
 */
void print_alphabet_x10(void)
{
	int i;
	int e;

	for (i = 0; i < 10; i++)
	{
		for (e = 97; e < 123; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}
