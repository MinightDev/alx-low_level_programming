#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: (0) Success
 */
int main(void)
{
	int i = 48;
	int j;
	int k;

	for (; i <= 55; i++)
	{
		j = i + 1;

		for (; j <= 56; j++)
		{
			k = j + 1;

			for (; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
