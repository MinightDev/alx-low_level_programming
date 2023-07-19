#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0 if success
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);
	char i;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	i = argv[2][0];

	if ((i == '/' || i == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = operation(a, b);
	printf("%d\n", result);
	return (0);
}
