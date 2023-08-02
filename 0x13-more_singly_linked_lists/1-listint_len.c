#include "lists.h"

/**
 * Function that returns the number of elements in a linked listint_t list.
 * 
 */


size_t listint_len(const listint_t *h)
{
	size_t numElem = 0;

	while (h)
	{
		numElem++;
		h = h->next;
	}

	return (numElem);
}
