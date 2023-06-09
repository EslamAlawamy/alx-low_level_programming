#include "lists.h"
/**
 * add_nodeint_end - func to add
 * @head: the head to add
 * @n: the list of elements
 * Return: the address of the head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(head));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	last_node = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	}
	return (*head);
}
