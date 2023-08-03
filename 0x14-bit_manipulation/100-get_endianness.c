#include "main.h"

/**
 * get_endianness - Function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *check = (char *)&num;

	return ((int)*check);
}
