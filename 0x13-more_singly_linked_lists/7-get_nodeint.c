#include "lists.h"
/**
 * get_nodeint_at_index - the main func
 * @head: the head of elements
 * @index: the index of nods
 * Return: the n node data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; head != 0 && i < index ; i++)
	{
		head = head->next;
	}
	return (head);
}
