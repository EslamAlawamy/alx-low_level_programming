#include "main.h"

/**
 * _strcat - the main
 * @dest: hreo
 * @src: oerh
 */

char *_strcat(char *dest, char *src)
{
	int s;
	int e;

	for (s = 0; dest[s] != '\0'; s++)
		;
	for (e = 0; src[e] != '\0'; e++)
	{
		dest[s] = src[e];
	}

	dest[s] = '\0';
	return (dest);
}
