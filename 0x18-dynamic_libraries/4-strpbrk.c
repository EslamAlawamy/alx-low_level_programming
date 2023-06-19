#include "main.h"
/**
 * _strpbrk - main
 * @s: first
 * @accept:sec
 * Return: end
 */
char *_strpbrk(char *s, char *accept)
{
	int e = 0, w;

	while (s[e])
	{
		w = 0;

		while (accept[w])
		{
			if (s[e] == accept[w])
			{
				s = s + e;
				return (s);
			}
		w++;
		}
		e++;
	}
	return ('\0');
}
