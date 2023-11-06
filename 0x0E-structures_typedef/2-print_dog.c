#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the dog
 * @d: pointer to dog
 * Return: Dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age != NULL) ? d->age : 0.0);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
