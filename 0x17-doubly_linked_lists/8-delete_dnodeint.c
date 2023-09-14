#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node to delete (starting from 0).
 * Return: 1 if the node was successfully deleted else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *node;
    unsigned int count;

    if (*head == NULL)
        return (-1);
    node = *head;
    if (index == 0)
    {
        *head = node->next;
        if (node->next != NULL)
            node->next->prev = NULL;
        free(node);
        return (1);
    }
    for (count = 0; node != NULL && count < index - 1; count++)
    {
        node = node->next;
    }
    if (node == NULL || node->next == NULL)
    {
        return (-1);
    }
    if (node->next->next != NULL)
    {
        node->next = node->next->next;
        free(node->next->prev);
        node->next->prev = node;
        return (1);
    }
    else
    {
        free(node->next);
        node->next = NULL;
        return (1);
    }
    return (-1);
}

