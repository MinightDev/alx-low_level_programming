#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints out the dog's info
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
