#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
*
* Return: (1) Success
*/
int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quott, sizeof(quot) - 1);

	return (1);
}
