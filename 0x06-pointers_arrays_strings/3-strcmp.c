#include "main.h"
/**
 * _strcmp - copies a string
 * @s1: destination.
 * @s2: source.
 * Return: the pointer to dest.
 */

int _strcmp(char *s1, char *s2)
{
	int e;

	for (e = 0; s1[e] != '\0' && s2[e] != '\0' ; e++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[e] - s2[e]);
		}
	}
		
	return (s1[e] - s2[e]);
}
