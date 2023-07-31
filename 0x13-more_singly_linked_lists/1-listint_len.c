#include "lists.h"

/**
 * listint_len - Prints all the elements.
 * @h: head.
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; h = h->next)
	{
		i++;
	}

	return (i);
}
