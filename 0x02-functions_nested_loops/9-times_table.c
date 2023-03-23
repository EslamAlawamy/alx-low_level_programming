#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a;
	int b;
	int eq;
		
	for (a = 0; a < 10; a++)
	{	_putchar('0');
		
	 
		for (b = 1; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');
		
			eq = a * b;	
	 		
			if (eq < 10)
			{
				_putchar(' ');
				_putchar(eq + '0');
			}
	 	}
	 _putchar('\n');
	}
}
