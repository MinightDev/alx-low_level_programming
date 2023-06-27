#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid password
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	srand(time(0));

	int i;
	int size = 20;

	for (i = 0; i <= size; i++)
	{
		printf("%c", rand() % (125 + 1 - 33) + 33);
	}

	return (0);
}
