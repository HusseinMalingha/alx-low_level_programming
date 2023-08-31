#include "main.h"

/**
 * _isalpha - checks if char is uppercase
 * @c: char to be checked
 *
 * Return: 1 if uppercase
 * or 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c < 90)
		return (1);
	else if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
