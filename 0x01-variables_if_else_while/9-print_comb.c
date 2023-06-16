#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: (0) Success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	return (0);
}
