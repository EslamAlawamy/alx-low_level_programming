#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - the main function
 * @size: unsigned
 * @c: the char
 * Return: is the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
