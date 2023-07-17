#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for a dog
 * @name: String representing the dog's name
 * @age: Float representing the dog's age
 * @owner: String representing the dog's owner name
 *
 * Description:
 * This structure defines the information related to a dog, including its name,
 * age, and owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
