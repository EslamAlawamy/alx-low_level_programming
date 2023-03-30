#include "main.h"
/**
 * _strcmp - copies a string
 * @s1: destination.
 * @s2: source.
 * Return: the pointer to dest.
 */

int _strcmp(char *s1, char *s2);
{
	int e;

	for (e = 0; s1[e] == s2[e]; e++);
		
	return (s1[e] - s2[e]);
}
