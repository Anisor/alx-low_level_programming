#include "main.h"

/**
 * Function that returns the number of bits you would need to flip to get from one number to another.
 * @n: Is the first number
 * @m: Is the second number
 *
 * Description: Returns 1 if it worked, or -1 if an error occurred
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, counter = 0;
	unsigned long int currently;
	unsigned long int excl = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		currently = excl >> s;
		while (currently & 1)
			counter++;
	}
	return (counter);
}
