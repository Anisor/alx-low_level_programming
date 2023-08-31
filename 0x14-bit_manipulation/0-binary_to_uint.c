#include "main.h"

/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int ind;
	unsigned int decimalValue = 0;

	if (!b)
		return (0);

	for (ind = 0; b[ind]; ind++)
	{
		if (b[ind] < '0' || b[ind] > '1')
			return (0);
		decimalValue = 2 * decimalValue + (b[ind] - '0');
	}

	return (decimalValue);
}
