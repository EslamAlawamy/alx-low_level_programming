#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: array of int
 * @size: size of the array
 * @value: the value
 * Return: success
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l, r, j, i;

	if (array == NULL)
		return (-1);
	l = 0;
	j = sqrt(size);
	r = j;
	while (1)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		if (r >= size || array[r] >= value)
			break;
		else if (array[r] < value)
		{
			l = r;
			r += j;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);
	for (i = l; i < size && i <= r; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
