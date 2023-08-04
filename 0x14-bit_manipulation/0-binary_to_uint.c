#include "main.h"

/**
 * Function that converts a binary number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars.
 *
 * Desription: Returns the converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 *
 */

unsigned int binary_to_uint(const char *b)
{

	int s;
	unsigned int decimal = 0;

	while (!b)
		return (0);

	for (s = 0; b[s]; s++)
	{
		if (b[s] < '0' || b[s] > '1')
			return (0);
		decimal = 2 * decimal + (b[s] - '0');
	}
	return (decimal);
}
