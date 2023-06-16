#include "lists.h"
/**
 * delete_dnodeint_at_index - the main func
 * @head: the header
 * @index: the index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	free(temp);
	return (1);
}
