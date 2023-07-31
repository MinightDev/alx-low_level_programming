#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: douboe pointer to head
 * @index: index of the node to be removed
 * Return: (1) if successful, else (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (tmp && i < (index - 1))
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL || (tmp->next) == NULL)
	{
		return (-1);
	}
	node = tmp->next->next;
	free(tmp->next);
	tmp->next = node;

	return (1);
}
