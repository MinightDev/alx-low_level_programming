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
	int c;
	int change = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);

	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; c >= 25; c = (c - 25), i++)
	{
	}
	for (; c >= 10; c = (c - 10), i++)
	{
	}
	for (; c >= 5; c = (c - 5), i++)
	{
	}
	for (; c >= 2; c = (c - 2), i++)
	{
	}

	change = (i + c);

	printf("%d\n", change);

	return (0);
}
