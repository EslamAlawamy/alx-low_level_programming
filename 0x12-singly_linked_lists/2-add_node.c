#include "lists.h"
/**
 * add_node - add node in the start
 * @str: the string that should be printed
 * @head: list of nodes
 * Return: the addres or null
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_new;
	list_t *new_node;
	int str_len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_new = strdup(str);

	if (str_new == NULL)
	{
		free(new_node);
		return (NULL);
	}	
	str_len = strlen(str_new);

	new_node->str = str_new;
	new_node->len = str_len;
	new_node->next = (*head);
	*head = new_node;

	return (new_node);

}
