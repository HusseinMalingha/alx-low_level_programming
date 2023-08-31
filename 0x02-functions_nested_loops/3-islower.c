#include "main.h"

/**
 * _islower -  checks if character is lower
 * @c: a character represented by ascii number
 * Return: 1 if lower
 * or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
