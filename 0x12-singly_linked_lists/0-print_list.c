#include "lists.h"
/**
 * print_list - the func used for print the lists
 * @h: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
	}
	return (n);
}
