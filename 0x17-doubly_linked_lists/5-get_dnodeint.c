#include "lists.h"

/**
 * get_dnodeint_at_index -this locates a node in a dlistint_t list.
 * @head: this is  head of the dlistint_t list.
 * @index: this is the index  node to locate.
 * return: if this the node does not exist - NULL.
 * otherwise -this the address of the located node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
