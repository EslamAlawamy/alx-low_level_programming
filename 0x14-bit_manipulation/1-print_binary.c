#include "main.h"
/**
 * print_binart - print binary
 * @n th ebinary var
 * Return: the binary num
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
	}	
}
