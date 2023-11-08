#include "function_pointers.h"

/**
 * array_iterator - a function that interates an array
 * @array: array to interate on
 * @size: size of array
 * @action: a function pointer to a custom function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
