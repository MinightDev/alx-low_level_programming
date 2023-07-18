#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i = 0, j = 0, k = 0;

	if (owner == NULLL || name == NULL)
	{
		return (NULL);
	}
	while (name[i])
	{
		i++;
	}
	i++;
	while (owner[j])
	{
		j++;
	}
	j++;
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(i * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	while (k < i)
	{
		dog->name[k] = name[k];
		k++;
	}

	while (k < j)
	{
		dog->owner[k] = owner[k];
		j++;
	}
	return (dog);
}
