#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 * @s: operator passed as an argument to the program
 * Return: Pointer
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

	int i = 0;

	while (ops[i].op)
	{
		if (s[i] == *(ops[i].op) && s[i + 1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}


