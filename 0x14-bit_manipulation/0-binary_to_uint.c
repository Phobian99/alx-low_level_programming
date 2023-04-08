#include "main.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
int _strlen(const char *s)
{
	int k;

		for (k = 0; s[k] != '\0'; k++)
		{
			continue;
		}
return (j);
}
/**
 * binary_to_uint - convert binary to unsigned int
 * @b:string from 0 and 1 else NULL
 *
 * Return:unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1;
	unsigned int k = 0;
	int c;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
	if (b[c] != '0' && b[c] != '1')
		return (0);
	if (b[c] == '1')
	{
		k += j;
	}
	j *= 2;
}
	return (k);
}
