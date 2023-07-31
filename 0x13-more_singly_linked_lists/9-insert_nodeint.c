#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node.
 * @head: pointer to head.
 * @idx: The index to insert the new node.
 * @n: The value to assign to the new node.
 * Return: pointer to a new inserted node
 * or NULL if insertion failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	i = 0;
	while (i < (idx - 1) && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
	{
		free(new);
		return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
