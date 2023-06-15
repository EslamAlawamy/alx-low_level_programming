#include "lists.h"
/**
 * sum_dlistint - the main func
 * @head: the header
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != 0)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
