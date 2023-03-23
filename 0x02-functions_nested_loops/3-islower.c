#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c >= 65)
		return (1);
	else
		return (0);
}
