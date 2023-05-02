#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: the list element
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	current = *head;
	if (head == NULL)
        {
                return;
        }
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
