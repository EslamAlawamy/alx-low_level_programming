#include "lists.h"
/**
 * reverse_listint - func to reverse list
 * @head: the head of the list
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *last;

	first = NULL;
	last = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head)
	{
		last = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = last;
	}
	*head = first;
	return (*head);
}
