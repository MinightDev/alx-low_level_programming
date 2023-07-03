#include <main.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: string
 * @b: constant byte
 * @n: n bytes of mem
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (i <= n)
		{
			s[i] = b;
		} else
		{
			s[i] = s[i];
		}
	}

}
