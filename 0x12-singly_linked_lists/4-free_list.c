#include "lists.h"
/**
 * free_list - function to free a linked list
 * @head: the list items
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);

		if (head->str != NULL)
			free(head->str);
		free(head);
	}
}
