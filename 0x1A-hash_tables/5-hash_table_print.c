#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			first_pair = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
