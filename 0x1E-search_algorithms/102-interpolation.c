#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: array of int
 * @size: size of the array
 * @value: the value
 * Return: success
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while ((array[high] != array[low]) &&
		   (value >= array[low]) &&
		   (value <= array[high]))
	{
		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	pos = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
