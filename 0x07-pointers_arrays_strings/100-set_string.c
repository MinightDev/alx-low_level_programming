#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to to
 * @to: pointer to char
 * On error, -1 is returned, and errno is set appropriately.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
