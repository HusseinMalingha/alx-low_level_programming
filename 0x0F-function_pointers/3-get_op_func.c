#include "3-calc.h"

/**
 * get_op_func - function pointer to get op function due to s
 * @s: operation sign i.e +, -, *, /, %
 * Return: op_func
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (ops[i].op == s[0] && s[1] == '\0')
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
