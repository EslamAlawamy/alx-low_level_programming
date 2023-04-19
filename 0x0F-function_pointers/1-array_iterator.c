#include "function_pointers.h"
/**
 * array_iterator - main
 * @array: arr
 * @size: sizet
 * @action: fun
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
