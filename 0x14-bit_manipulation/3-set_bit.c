#include "main.h"

/**
 * Function that sets the value of a bit to 1 at a given index.
 * @n: points to the number to change
 * @index: index of the bit to set to 1
 *
 * Description: Returns 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	while (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
