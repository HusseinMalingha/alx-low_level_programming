#include "function_pointers.h"

/**
 * int_index - function returns index of element equal to int supplied
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer to function checking integer
 * Return: index of array for which value is equal to supplied integer
 * or return -1 on failure to match any value or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
