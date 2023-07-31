#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to header.
 * @index: index of the node to get.
 * Return: pointer to the node or NULL if index is out of range.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}

