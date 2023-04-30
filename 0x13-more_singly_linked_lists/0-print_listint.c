#include "lists.h"
/**
 * print_listint - func that print the lists
 * @h: the list
 * Return: the count of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		counter++;
	}
	return (counter);
}
