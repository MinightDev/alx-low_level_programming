#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = list->express;
	skiplist_t *prev = list;

	if (list == NULL)
		return (NULL);

	while (express && express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		prev = express;
		express = express->express;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, express ? express->index : prev->index);

	while (prev && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	if (prev && prev->n == value)
		return (prev);

	return (NULL);
}

