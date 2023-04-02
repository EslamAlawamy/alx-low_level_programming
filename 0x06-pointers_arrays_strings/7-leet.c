#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	char *ptr = s;
	int i;
	int j;
	char o[11] = "aAeEoOtTlL";
	char c[11] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (s[i] == o[j])
			{
				s[i] == c[j];
			}
		}
	}
	return (ptr);
}
