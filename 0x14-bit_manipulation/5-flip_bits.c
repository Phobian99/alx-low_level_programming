#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n : unsigned long int
 * @m : unsigned long int
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int q;
	int w = 0;

	q = n ^ m;
	while (q >= 1)
	{
		if ((q & 1) == 1)
		f++;
		q >>= 1;
	}
	return (f);
}
