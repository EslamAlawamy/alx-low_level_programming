#include "main.h"
/**
 * _strspn - main
 * @s: firet
 * @accept: secon
 * Return: end
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int e = 0, w, q = 0;

	while (accept[e])
	{
		w = 0;

		while (s[w] != 32)
		{
			if (accept[e] == s[w])
			{
				q++;
			}
			w++;
		}
			e++;
	}
	return (q);

}
