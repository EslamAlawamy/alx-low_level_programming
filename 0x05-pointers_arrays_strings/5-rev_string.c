#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int le;
	int r;
	char n;

	for (le = 0; s[le] != '\0'; le++)
		;
	for (r = 0; r < le / 2; r++)
	{
		n = s[r];
		s[r] = s[le - 1 - r];
		s[le - 1 - r] = n;
	}
}
