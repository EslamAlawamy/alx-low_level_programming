#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a list
 * @head: A pointer to listint_t
 * Return: The address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *o_p = head, *t_p = head;

	while (o_p && t_p && t_p->next)
	{
		o_p = o_p->next;
		t_p = t_p->next->next;
		if (o_p == t_p)
		{
			return (o_p);
		}
	}
	return (NULL);
}
