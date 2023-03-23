#include "main.h"
/**
 * print_alphabet - Yeah
 *
 * Return: is 0
 */
void print_alphabet_x10(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
