#include "lists.h"

/**
 * Function that returns the sum of all the data (n) of a listint_t linked list.
 * @head: first node in the linked list
 *
 * Description: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sumData = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumData += temp->n;
		temp = temp->next;
	}

	return (sumData);
}
