#include "main.h"
/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int e = 0, w = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[e + w] != needle[w])
			{
				break;
			}

			w++;
		}

		if (needle[w] == '\0')
		{
			return (haystack + w);
		}

		e++;
	}

	return ('\0');
}
