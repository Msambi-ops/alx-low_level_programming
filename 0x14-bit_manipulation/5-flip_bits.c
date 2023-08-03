#include "main.h"

/**
 * flip_bits - this funct counts the number of bits to change.
 * to get from one number to another.
 * @n: this is first number
 * @m: this is second number
 *
 * Return: returns the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int currnt;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		currnt = exclusive >> i;
		if (currnt & 1)
			count++;
	}

	return (count);
}
