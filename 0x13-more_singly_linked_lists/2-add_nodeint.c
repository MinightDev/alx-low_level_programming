#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: head.
 * @n: number.
 * Return: the address of the new node if Success, NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
