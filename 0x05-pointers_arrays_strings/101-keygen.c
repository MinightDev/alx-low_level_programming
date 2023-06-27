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
	int size = rand() % (9 + 1 - 15) + 15;

	srand(time(0));

	for (i = 0; i <= size; i++)
	{
		int random1 = rand() % (57 + 1 - 48) + 48;
		int random2 = rand() % (47 + 1 - 33) + 33;
		int random3 = rand() % ('z' - 'a' + 1) + 'a';
		int random4 = rand() % ('Z' - 'A' + 1) + 'A';

		printf("%c%c%c%c", random1, random2, random3, random4);
	}

	return (0);
}
