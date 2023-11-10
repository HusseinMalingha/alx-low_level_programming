#include <stdio.h>
#include "3-calc.h"

int _strcmp(const char *s1, const char *s2);

/**
 * main - execution point
 * @argc: arguments size
 * @argv: array of arguments
 * Return: On Success return 0, else if the number of arguments is wrong 98,
 * else if the operator is none of the above 99, else if the user tries to
 * divide (/ or %) by 0
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((_strcmp(argv[2], "/") == 0 || _strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);
	return (0);
}

/**
 * _strcmp - compare strings
 * @s1: string one
 * @s2: string two
 * Return: difference of their lengths
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
