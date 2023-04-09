#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int w = 1;
	char *z = (char *)&w;

	if (*z)
		return (1);
	else
		return (0);
}
