#include "main.h"

/**
 * Function that checks the endianness.
 *
 * Description: returns 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int s = 1;
	char *r = (char *) &s;

	return (*r);
}
