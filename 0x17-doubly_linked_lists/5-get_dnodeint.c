#include "lists.h"
/**
 * get_dnodeint_at_index - the main func
 * @head: the header
 * @index: the index of the element
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{


	while (head != 0)
	{
		if (index == 0)
		{
			return (head);
		}
		index--;
		head = head->next;
	}
	return (NULL);
}
