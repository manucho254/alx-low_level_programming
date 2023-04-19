#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function to get get functiion to use with operator @op
 * @op: type of operator to find
 * Return: pointer to function to execute for the operator else NULL
 */

int (*get_op_func(char *op))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(op, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
