#include <stdio.h>
#include "3-calc.h"

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

	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);
	return (0);
}

