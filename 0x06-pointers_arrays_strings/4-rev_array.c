#include "main.h"
/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
	int e;
	int all;

	for (e = 0; e < n / 2; e++)
	{
		all = a[e];
		a[e] = a[n - e - 1];
		a[n - e - 1] = all;
	}
}

