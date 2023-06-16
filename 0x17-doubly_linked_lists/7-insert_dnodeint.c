#include "lists.h"
/**
 * insert_dnodeint_at_index - the man func
 * @h: the header
 * @idx: the index
 * @n: the var
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	while (temp != NULL && idx > 0)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = add_dnodeint(&(temp->next), n);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = temp;
	return (new_node);
}
