#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60 ; m++)
		{
			_putchar(h);
			_putchar(':');
			_putchar(m);
			_putchar('\n');
		}
	}
}
