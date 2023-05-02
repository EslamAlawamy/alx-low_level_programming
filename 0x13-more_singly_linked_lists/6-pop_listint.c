#include "lists.h"
/**
 * pop_listint - function to free
 * @head: the head of the list
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = *head;
	(*head) = (*head)->next;
	free(temp);

	return (n);
}
