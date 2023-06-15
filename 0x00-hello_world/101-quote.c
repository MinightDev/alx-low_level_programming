#include <stdio.h>
/**
* main - Entry point
*
*
* Return: (1) Success
*/
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, quote, sizeof(quote) - 1);

	return (1);
}
