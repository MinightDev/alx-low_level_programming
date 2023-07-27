#include "lists.h"

/**
 * list_len - calcs the num of nodes
 * @h: head
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
