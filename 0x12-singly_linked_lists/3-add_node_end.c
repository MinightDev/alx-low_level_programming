#include "lists.h"
/**
 * _strdup - function that returns a pointer to a newly alloc space
 * @str: str
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(const char *str)
{
	int i = 0;
	int j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';

	return (s);
}
/**
 * add_node_end - adds a new node at the end
 * @head: head
 * @str: string to put in the node
 *
 * Return: address of the node element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = _strdup(str);
	node->len = len;
	node->next = (NULL);

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;

	return (node);
}
