#include "lists.h"
/**
 * dlistint_len - the main func
 * @h: the headear
 * Return: the number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
