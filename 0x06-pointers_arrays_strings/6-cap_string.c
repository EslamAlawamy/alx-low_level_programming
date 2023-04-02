#include "main.h"
#include <stdio.h>

/**
  * cap_string - ...
  * @s: ...
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int e;
	int s;
	char sep[13] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (e = 0; s[e] != '\0'; e++)
	{
		if (s[e] == 0 && s[e] < 123 && s[e] > 96)
			s[e] = s[e] - 32;
	}
	
	return (s);
}
