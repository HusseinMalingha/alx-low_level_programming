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
	int name_length, owner_length;

	// Allocate memory for the dog structure
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
		return NULL;

	// Calculate the length of the name and owner strings
	name_length = 0;
	owner_length = 0;
	while (name[name_length])
		name_length++;
	while (owner[owner_length])
		owner_length++;

	if (new_dog == NULL)
		return NULL;

	// Allocate memory for the name and owner strings
	new_dog->name = malloc(name_length + 1);   // +1 for the null terminator
	new_dog->owner = malloc(owner_length + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL) {
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return NULL;
	}

	// Copy the name and owner strings
	for (int i = 0; i <= name_length; i++)
		new_dog->name[i] = name[i];
	for (int i = 0; i <= owner_length; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;
	return new_dog;
}
