#include "main.h"
/**
 * _strchr - main
 * @s: first
 * @c: second
 * Return: end
 */
char *_strchr(char *s, char c)
{
	int e = 0;
	int w;

	while (s[e])
	{
		e++;
	}
	for (w = 0; w <= e; w++)
	{
		if(c == s[w])
		{
			s = s + w;
			return (s);
		}
	}
	return ('\0');
}
