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

	for (i = 97; i <= 122; i++)
	{
		putchar(i);

		if (i == 122)
		{
			for (k = 65; k <= 90; k++)
			{
				putchar(k);
			}
		}
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
