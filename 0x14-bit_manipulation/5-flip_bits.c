#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ind, count = 0;
	unsigned long int exclusive = n ^ m;
	unsigned long int current;
	
	for (ind = 63; ind >= 0; ind--)
	{
		current = exclusive >> ind;
		if (current & 1)
			count++;
	}

	return (count);
}
