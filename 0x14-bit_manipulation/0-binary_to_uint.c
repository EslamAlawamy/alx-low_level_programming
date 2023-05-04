#include "main.h"
/**
 * binary_to_uint - the main func
 * @b: the binary
 * Return: converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		converted <<= 1;
		converted = converted + (*b - '0');
		b++;
	}
	return (converted);
}
