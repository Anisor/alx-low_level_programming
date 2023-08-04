#include "main.h"

/**
 * Function that prints the binary representation of a number.
 * * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int s, counter = 0;
	unsigned long int currently;

	for (s = 63; s >= 0; s--)
	{
		currently = n >> s;

		if (currently & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}

	while (!counter)
		_putchar('0');
}

