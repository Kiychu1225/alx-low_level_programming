#include "lists.h"

/**
 * sum_dlistint -this are the  Sums of  all the data of a dlistint_t list.
 * @head: this head of the dlistint_t list.
 * Return:this is the  sum of all the data.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

