#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @p: The string will be modified
  *
  * Return: char var
  */
char *string_toupper(char *p)
{
	int a;

	for (a = 0;p[a] != '\0'; a++)
	{
		if (a > 96 && a < 123)
			p[i] = p[i] - 32;
	}
	return (p);
}

