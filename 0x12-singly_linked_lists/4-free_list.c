#include "lists.h"
/**
 * free_list - function to free a linked list
 * @head: the list items
 */
void free_list(list_t *head)
{
	list_t *tempo;

	tempo = head;
	while(tempo)
	{
		tempo = head;
		head = head->next;
		free(tempo->str);
		free(tempo);
	}
	free(head);
}
