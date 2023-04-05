#include "main.h"
/**
 * factorial - main
 * @n: var
 * Return: the last
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
