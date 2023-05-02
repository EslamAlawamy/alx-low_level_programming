#include "lists.h"
/**
 * delete_nodeint_at_index - func to delete spec element
 * @head: the head of lists
 * @index: the index of deleted element
 * Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		temp = current;
		current = current->next;

		if (current == NULL)
		{
			return (-1);
		}
	}
	temp->next = current->next;
	free(current);

	return (1);

}
