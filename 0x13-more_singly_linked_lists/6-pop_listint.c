#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: head.
 * Return: int value of the first node if success, else 0.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *new;

	if (*head == NULL)
	{
		return (0);
	}

	new = (*head);
	n = new->n;
	*head = new->next;
	free(new);

	return (n);
}

