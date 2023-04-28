#include "lists.h"
/**
 * add_node_end - the func to add nodes
 * @head: the list
 * @str: the string
 * Return: the addres of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_new;
	int str_len;
	list_t	*new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));
	str_new = strdup(str);

	for (str_len = 0; str[str_len]; str_len++)
		;
	if (str_new == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_new;
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		for (; last_node->next != NULL; last_node = last_node->next)
			;
		last_node->next = new_node;
	}
	return (new_node);
}
