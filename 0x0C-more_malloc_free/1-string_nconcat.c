#include "main.h"
/**
 * string_nconcat - main function
 * @s1: the first var
 * @s2: the sec
 * @n: last var
 * Return: is
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	int f;
	int s;

	if (s1 == NULL)
	{
		s1 = 0;
	}
	if (s2 == NULL)
	{
		s2 = 0;
	}

	for (f = 0; s1[f] != '\0'; f++)
		;
	for (s = 0; s2[s] != '\0'; s++)
		;
	mem = malloc(sizeof(char) * (f + s + 1));
	if (mem == NULL)
	{
		return (NULL);
	}

}
