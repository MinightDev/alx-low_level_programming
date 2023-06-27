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
	int i;
	int size = rand() % (20 + 1 - 30) + 30;
	srand(time(0));

	for (i = 0; i <= size; i++)
	{
		printf("%c", rand() % (125 + 1 - 33) + 33);
	}

	return (0);
}
