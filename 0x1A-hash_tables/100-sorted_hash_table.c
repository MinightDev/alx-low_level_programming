#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the created sorted hash table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Inserts a key-value pair into a sorted hash table.
 * @ht: The sorted hash table to insert the pair into.
 * @key: The key to insert.
 * @value: The value to insert.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current, *prev;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	prev = NULL;
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		if (strcmp(key, current->key) < 0)
			break;
		prev = current;
		current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = current;
	if (prev == NULL)
		ht->array[index] = new_node;
	else
		prev->next = new_node;

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead = new_node;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL && strcmp(key, current->snext->key) >= 0)
			current = current->snext;
		new_node->sprev = current;
		new_node->snext = current->snext;
		current->snext = new_node;
	}

	if (new_node->snext == NULL)
		ht->stail = new_node;

	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key in a sorted hash table.
 * @ht: The sorted hash table to search in.
 * @key: The key to search for.
 *
 * Return: The value associated with the given key, or NULL if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first = 0;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first = 0;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table and its nodes.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);
	free(ht);
}
