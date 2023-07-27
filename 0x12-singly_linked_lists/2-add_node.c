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
 * add_node - adds a new node
 * @head: head
 * @str: new string to add
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = _strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
