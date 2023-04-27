#include "lists.h"
/**
 * list_len- func that return with lenth
 * @h: the list
 * Return: the number of elements in list
 */
size_t list_len(const list_t *h)
{
	int num = 0;

	for (; h != NULL; h = h->next)
	{
	num++;
	}
	return (num);
}
