#include "lists.h"

/**
 * Function that returns the nth node of a listint_t linked list.
 * 
 * @index: is the index of the node, starting at 0
 *
 * Description: if the node does not exist, return NULL
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}
	return (temp ? temp : NULL);

}
