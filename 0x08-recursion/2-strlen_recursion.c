#include "main.h"
/**
 * _strlen_recursion - main
 * @s: var
 *
 */
int _strlen_recursion(char *s)
{
	int l;

	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion (s + 1));
}