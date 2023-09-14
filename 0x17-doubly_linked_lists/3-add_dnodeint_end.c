#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node to the end of a doubly linked list
 *
 * @head: A pointer to a pointer to the head of the list
 * @n: The integer value to be stored in the new node
 *
 * Return: A pointer to the newly created node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = NULL, *end = *head;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;
	list->prev = NULL;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (*head);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	list->prev = end;
	end->next = list;

	return (list);
}
