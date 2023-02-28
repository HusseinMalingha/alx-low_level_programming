#include "main.h"
#include <stddef.h>

/**
 * swap_int - swaps the values of two variables
 * @a: first pointer
 * @b: second pointer
 *
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
