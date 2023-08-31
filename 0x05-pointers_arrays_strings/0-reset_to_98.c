#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates the value it points to to 98
 *@n: the pointer storing  address to reset
 *
 * Return: None
 */
void reset_to_98(int *n)
{
	/* *n is a pointer that points to the addres input in the function */
	*n = 98;
}
