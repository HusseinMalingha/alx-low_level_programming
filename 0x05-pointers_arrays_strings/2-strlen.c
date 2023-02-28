#include "main.h"
#include <string.h>

/**
 * _strlen - calculate size of string
 * @s: string to be measured
 *
 * Return: None
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
