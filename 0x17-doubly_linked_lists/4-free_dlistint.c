#include "lists.h"
/**
 * free_dlistint - the main func
 * @head: the header
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
