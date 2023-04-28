#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	char *str_new;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if(new_node == NULL)
	
		return (NULL);

	str_new = strdup(str);

	new_node->str = str_new;
	new_node->next = (*head);
	*head = new_node;
	return (new_node);

}
