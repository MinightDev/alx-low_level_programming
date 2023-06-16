#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: (0) Success
 */
int main(void)
{
	int i = 0;
	int j;
	int sum = j + i;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			if (i != j && j > i)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (sum != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;

		}
		i++;
	}

	putchar('\n');

	return (0);
}
