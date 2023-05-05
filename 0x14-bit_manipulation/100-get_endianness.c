#include "main.h"
/**
 * get_endianness - the main fun
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;

	i = 1;
	char *c = (char *)&i;
	if (*c != 0)
		return (1);
	return (0);
}
