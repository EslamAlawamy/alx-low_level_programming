#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *d;
	int t;
	int c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (t = 0; str[t] != '\0'; t++ )
		;
	d = malloc(sizeof(char) * t );
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		for (c = 0; c < t; c++)
		d[t] = str[c];
	}
	return (d);
}
