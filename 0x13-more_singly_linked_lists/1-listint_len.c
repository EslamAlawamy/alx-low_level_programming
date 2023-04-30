#include "lists.h"
/**
 * listint_len - function that count the elements
 * @h: the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != 0)
	{
	h = h->next;
	counter++;
	}
	return (counter++);
}
