#include "main.h"

/**
 * binary_to_uint - covert binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the conevrted number, or 0 if string or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');
	}

	return (result);
}
