#include "lists.h"
/**
 * free_list - feeres a linked list
 * @head: head
 *
 * Return: none.
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}

}
