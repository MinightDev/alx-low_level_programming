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
	int sum = 0;
	int chars[100];
	int range = 78;
	int size = sizeof(chars) / sizeof(chars[0]);
	int n;

	for (i = 0; i < size; i++)
	{
		chars[i] = rand() % range;
		sum += (chars[i] + 48);

		putchar(chars[i] + 48);

		if ((2772 - sum) - 48 < range)
		{
			n = 2772 - sum - 48;
			sum += n;
			putchar(n + 48);
			break;
		}
	}


	return (0);
}
