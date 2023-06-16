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
	int k;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i == 57)
		{
			for (k = 97; k <= 102; k++)
			{
				putchar(k);
			}
		}
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
