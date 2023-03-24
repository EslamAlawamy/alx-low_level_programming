#include "main.h"

/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
	int t;
	int i;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 15; i++)
		{
			if (n > 9)
			_putchar(1 + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
