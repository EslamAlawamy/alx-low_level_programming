#include "main.h"
/**
 * _memset - main
 * @s: one
 * @b: two
 * @n: three
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		s[e] = b;
	}
	return (s);
}
