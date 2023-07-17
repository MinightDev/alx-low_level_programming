#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));

	} else
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
