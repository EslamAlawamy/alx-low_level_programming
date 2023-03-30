#include "main.h"
/**
 * _strncat - main
 * @dest: hel
 * @src: helo
 * @n:hello
 */
char *_strncat(char *dest, char *src, int n)
{
  int e;
  int s;

  for (e = 0; dust[e] != '\0'; e++)
    ;
  for (s = 0; src[s] != '\0'; s++)
  {
    dest[e + s] = src[s];
  }
  return (dest);
}
