#include "dog.h"

/**
 * init_dog - initialize struct of the dog
 * @d: pointer to struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
