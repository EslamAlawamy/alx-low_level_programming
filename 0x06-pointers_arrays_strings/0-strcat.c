#include "main.h"

/**
 * _strcat - the main
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int e;
	int s;

	for (e = 0; src[e] != '\0'; e++);

	for (s = 0; dest[s] != '\0'; s++)
	{
		dest[s + e] = src[e];
	}	
	
	dest[s + e] = '\0'
	return (dest);
}
