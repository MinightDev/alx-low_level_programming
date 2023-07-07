#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point.
 *
 * @argc: argument count.
 * @argv: argument value.
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int i;
	int len = 0;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	} else if (argc > 0)
	{
		for (i = 1; < argc; i++)
		{
			while (argv[i][len] != '\0')
			{
				if (!(argv[i][len] >= 48 && argv[i][len] <= 57))
				{
					printf("Error\n");
					return (1);
				}
				len++;
			}
		}

	} else
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
