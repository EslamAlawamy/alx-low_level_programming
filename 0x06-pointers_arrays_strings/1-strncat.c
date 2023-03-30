#include "main.h"
/**
 * _strncat - main
 * @dest: hel
 * @src: helo
 * @n:hello
 */
char *_strncat(char *dest, char *src, int n)
{
	int e;
	int s;

	for (s = 0; dest[s] != '\0'; s++)
		;
	for (e = 0; src[e] != '\0'; e++)
	{
		dest[e + s] = src[s];
	}
	return (dest);
}
