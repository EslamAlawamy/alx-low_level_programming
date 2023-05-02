#include "lists.h"
/**
 * sum_listint - the func that give the sum of nodes
 * @head: the head of element
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != 0)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
