#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - the main func
 * @s1: 1st vr
 * @s2: sec vr
 * Return: should return null if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int f;
	int s;
	int i;

	if (s1 == 0)
	{
		return (NULL);
	}
	if (s2 == 0)
	{
		return (NULL);
	}
	for (f = 0; s1[f] != '\0'; f++)
		;
	for (s = 0; s2[s] != '\0'; s++)
		;
	c = malloc(sizeof(char) * (s + f + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < f; i++)
	{
		c[i] = s1[i];
	}
	for (i = 0; i < s; i++)
	{
		c[i + f] = s2[i];
	}
	c[f + s] = '\0';
	return (c);
}
