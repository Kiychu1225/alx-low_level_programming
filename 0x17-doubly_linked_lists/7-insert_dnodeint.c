#include "lists.h"

/**
 * insert_dnodeint_at_index - this  inserts a new node in a dlistint_t lists at a given position.
 * @h: this is a pointer to the head of the dlistint_t list.
 * @idx: this is the position to insert the new node.
 * @n: this is the integer for the new node to contain.
 * Return: if this function fails - NULL.
 * otherwise - this is the  address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
