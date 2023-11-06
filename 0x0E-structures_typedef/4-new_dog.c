#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_length, owner_length;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
		return (NULL);

	name_length = 0;
	owner_length = 0;
	while (name[name_length])
		name_length++;
	while (owner[owner_length])
		owner_length++;

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_length + 1);
	new_dog->owner = malloc(owner_length + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_length; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= owner_length; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;
	return (new_dog);
}
