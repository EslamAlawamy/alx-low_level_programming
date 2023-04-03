#include "main.h"
/**
 * _memcpy - main
 * @dest: one
 * @src: two
 * @n: three
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned e;

	for (e = 0; e < n; e++)
	{
		dest[e] = src[e];
	}
	return (dest);
}
