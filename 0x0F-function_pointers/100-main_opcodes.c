#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: Always 0 if success
 */
int main(int argc, char *argv[])
{
	int bytes;
	int i;
	char *addr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		return (2);
	}
	i = 0;
	while (i < bytes)
	{
		printf("%02hhx", addr[i]);
		if (i != (bytes - 1))
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}

